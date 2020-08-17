#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int n;
	cin>>n;
	queue<ll> qu;
	qu.push(1);
	for(int i=0;i<n;i++){
		ll t=qu.front();
		qu.pop();
		qu.push(t*10);qu.push(t*10+1);
		cout<<t<<" ";
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

