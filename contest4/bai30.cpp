#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll const mod=1e9+7;
ll n;
ll a[1005];
void solve(){
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=1000;i++){
		a[i]=(a[i-1]+a[i-2]) % mod;
	}
}
int main(){
	int t;
	cin>>t;
	solve();
	while(t--){
		cin>>n;
		cout<<a[n]<<endl;
	}
}

