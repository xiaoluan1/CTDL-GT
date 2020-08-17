#include<bits/stdc++.h>
#include<vector>

using namespace std;

int ok;

void dfs(int u,int s,vector<int> v[],vector<int> &vs,int e[],int k){
	if(ok) return;
	e[k]=u;
	if(u == s){
		ok=1;
		for(int i=1;i<=k;i++){
			cout<<e[i]<<" ";
		}
		return;
	}
	vs[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(vs[v[u][i]] == 0){
			dfs(v[u][i],s,v,vs,e,k+1);
		}
	}
}

void solve(){
	int m,n,x,y,u,s;
	ok=0;
	cin>>n>>m>>u>>s;
	vector<int> vs(n+2,0);
	vector<int> v[n+2];
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
	int e[100005];
	vs[u]=1;
	dfs(u,s,v,vs,e,1);
	if(ok==0) cout<<-1;
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
