#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

vector<long> a;
long m,n,k;
void solve(){
	cin>>m>>n>>k;a.resize(m+n);
	for(int i=1;i<=m+n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	cout<<a[k]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}
}

