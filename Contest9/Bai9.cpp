#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int m,n,x,y,u;
	cin>>n>>m>>u;
	vector<int> v[n+2];
	vector<int> vs(n+1,0);
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
	queue<int> qu;
	qu.push(u);
	while(!qu.empty()){
	int t=qu.front();
	cout<<t<<" ";
	vs[t]=1;
	qu.pop();
	for(int i=0;i<v[t].size();i++){
		if(vs[v[t][i]]==0){
			qu.push(v[t][i]);
			vs[v[t][i]]=1;
		}
	}
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
