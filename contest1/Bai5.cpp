#include<bits/stdc++.h>

using namespace std;
int n,k,a[20];
int ok;
void input(){
	cin>>n>>k;
	ok=true;
	for(int i=1;i<=k;i++) a[i]=i;
}

void output(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void next_combination(){
	int i=k;
	while(i >= 0 && a[i]==n-k+i) i--;
	if(i>0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}else{
		ok=false;
	}
	
}
void solve(){
	input();
	while(ok){
		output();
		next_combination();
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

