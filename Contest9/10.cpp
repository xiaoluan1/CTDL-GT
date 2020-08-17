#include<bits/stdc++.h>
#include<vector>

using namespace std;
int ok,k;
void dfs(int u,int s,vector<int> &vs,vector<int> v[],int k,int e[]){
	if(ok) return;
	e[k]=u;
	if(u==s){
		ok=1;
		for(int i=1;i<=k;i++){
			cout<<e[i]<<" ";
		}
		return;
	}
	vs[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(vs[v[u][i]] == 0){
			dfs(v[u][i],s,vs,v,k+1,e);
		}
	}
}

void solve(){
	int m,n,x,y,u,s;
	ok=0;
	cin>>n>>m>>u>>s;
	vector<int> v[n+2];
	vector<int> vs(n+2,0);
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	vs[u]=1;
	int e[10000];
	dfs(u,s,vs,v,1,e);
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
