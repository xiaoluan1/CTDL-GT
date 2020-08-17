#include<bits/stdc++.h>

using namespace std;

void solve(int &n,int a[]){
	if(n==1);
	else{
		cout<<"[";
	for(int i=1;i<n;i++){
		a[i]=a[i]+a[i+1];
		if(i != n-1) cout<<a[i]<<" ";
		else cout<<a[i];
	}
	cout<<"]\n";
	n--;
	solve(n,a);
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<"[";
		for(int i=1;i<=n;i++){
			if(i != n) cout<<a[i]<<" ";
			else cout<<a[i];
		}
		cout<<"]\n";
		solve(n,a);
	}
}

