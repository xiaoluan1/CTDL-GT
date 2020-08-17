#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int n;
	cin>>n;
	long a[n+2],b[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];b[i]=a[i];
	} 
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i] != b[i]){
			cout<<i+1<<" ";
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i] != b[i]){
			cout<<i+1;
			break;
		}
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

