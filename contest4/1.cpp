#include<bits/stdc++.h>

#define ll long long

using namespace std;
const ll mod=1e9+7;
ll n,k;
ll mu(ll n,ll k){
	if(k==1) return n%mod;
	ll temp=mu(n,k/2);//chia nho ra
	temp=temp*temp%mod;
	if(k%2==1) return temp*n%mod;
	return temp;
}

void nhap(){
	cin>>n>>k;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		cout<<mu(n,k)<<endl;
	}
}

