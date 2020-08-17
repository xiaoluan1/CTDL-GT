#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
long n,m;




void in(){
	cin>>n>>m;
	long a[n+1],b[m+1];
	vector<int> h;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	int i=1,j=1;
	while(i<=n && j <= m){
		if(a[i]<b[j]) cout<<a[i++]<<" ";
		else if (a[i]>b[j]) cout<<b[j++]<<" ";
		else{
			cout<<a[i]<<" ";
			h.push_back(a[i]);
			i++;j++;
		}
	}
	while(i<=n) {
	cout<<a[i++]<<" ";
	}
	while(j<=m){
	cout<<b[j++]<<" ";
	} 
	cout<<endl;
	if(h.size()){
		for(int i=0;i<h.size();i++){
		cout<<h[i]<<" ";
	
		}
		cout<<endl;
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		in();	
	}
	
}

