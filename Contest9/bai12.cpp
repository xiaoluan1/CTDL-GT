#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int m,n,y,x,u,s;
	cin>>n>>m>>u>>s;
	vector<int> v[n+2];
	vector<int> vs(n+2,0);
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue<int> qu;
	qu.push(u);
	int way[10005]={0};
	while(!qu.empty()){
		int t=qu.front();
		vs[t]=1;
	//	cout<<t<<" ";
		qu.pop();
		for(int i=0;i<v[t].size();i++){
			if(vs[v[t][i]] == 0){
				qu.push(v[t][i]);
				way[v[t][i]] = t;
				vs[v[t][i]]=1;
			}
		}
	}
	if(way[s]){
		int t=s;
		vector<int> ans;
		while(t){
			ans.push_back(t);
			t=way[t];
		}
		for(int i = ans.size()-1;i >= 0;i--) cout<<ans[i]<<" ";
	}
	else cout<<-1<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
	solve();	
	}
}
