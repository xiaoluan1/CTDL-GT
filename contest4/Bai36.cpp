#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
string a,b;
void solve(){
	cin>>a>>b;
	ll x=0,y=0;
	for(int i=0;i<a.length();i++){
		x=x*2+(a[i]-'0');
	}
	for(int i=0;i<b.length();i++){
		y=y*2+(b[i]-'0');
	}
	ll k=x*y;
	cout<<k<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
}

