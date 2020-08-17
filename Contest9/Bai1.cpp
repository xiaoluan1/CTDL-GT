#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int m,n,x,y;
	cin>>n>>m;
	vector<int> v[n+1];
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i <= n;i++){
		cout<<i<<": ";
		sort(v[i].begin(),v[i].end());
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

