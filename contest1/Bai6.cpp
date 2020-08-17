#include<bits/stdc++.h>

using namespace std;
int n,a[150];
int ok;
void input(){
	cin>>n;
	ok=true;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void permutation(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]) i--;
	if(i>0){
		int k=n;
		while(a[i]>a[k]) k--;
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;		
		int t=i+1;
		int s=n;
		while(t<=s){
			int p=a[s];
			a[s]=a[t];
			a[t]=p;
			s--;
			t++;
	}
	}
	else ok=false;
}
void output(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}

void solve(){
	input();
	while(ok){
		output();
		permutation();
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

