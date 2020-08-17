#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int m,n;
	cin>>n>>m;
	int ans=0;
	while(n<m){
		if(m%2>0){
			m++;
			ans++;
		}
		else{
			m/=2;
			ans++;
		}
	}
	cout<<ans+n-m<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
}

