#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int n;
	cin>>n;
	queue<ll> q;
	q.push(9);
	while(!q.empty()){
		ll t=q.front();
		if(t%n==0){
			cout<<t<<endl;
			return;
		}
		q.pop();
		q.push(t*10);q.push(t*10+9);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}

}

