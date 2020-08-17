#include<bits/stdc++.h>
#include<vector>
using namespace std;

void dfs(int u,vector<int> v[],vector<int> &vs){
	cout<<u<<" ";
	vs[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(vs[v[u][i]] == 0){
			dfs(v[u][i],v,vs);
		}
	}
	return;
}

void solve(){
	int m,n,x,y,u;
	cin>>n>>m>>u;
	vector<int> v[m+1];
	vector<int> vs(m+1,0);
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
	dfs(u,v,vs);
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
