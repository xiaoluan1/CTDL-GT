#include<bits/stdc++.h>
#include<vector>

using namespace std;

void dfs(int u,vector<int> &vs,vector<vector<int> > v){
	cout<<u<<" ";
	vs[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(vs[v[u][i]] == 0){
			dfs(v[u][i],vs,v);
		}
	}
	return;
}

void result(){
	int m,n,u,x,y;
	cin>>n>>m>>u;
	vector<vector<int> > v(n+1);
	vector<int> vs(n+2,0);
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(u,vs,v);
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		result();
	}
}
