#include<bits/stdc++.h>

using namespace std;
int n,OK;
int a[15];

void input(){
	cin>>n;
	OK=true;
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
void output(){
	for(int i=0;i<n;i++){
		if(a[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}
void binary_string(){
	int i=n-1;
	while(i>=0&&a[i]!=0){
	a[i]=0;
	i--;
	
	}
	if(i>=0){
		a[i]=1;
	}
	else OK=false;
}
void solve(){
	input();
	while(OK){
		output();
		binary_string();
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

