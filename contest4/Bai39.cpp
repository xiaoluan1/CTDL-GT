#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
int n;
void solve(){
	cin>>n;
	ll a[n+2],b[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>b[i];
	}
	
	for(int i=0;i<n-1;i++){
		if(a[i] != b[i]){
			cout<< i + 1 <<endl;
			return;
		}
	}
}

int main(){
//ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}

}

