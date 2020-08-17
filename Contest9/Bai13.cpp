#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int a,b,x,y,u,s;
	cin>>a>>b>>u>>s;
	vector <int> v[a+2];
	vector <int> vs(a+2,0);
	for(int i=1;i<=b;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
	queue <int> qu;
	qu.push(u);
	int path[1005]={0};
	while(!qu.empty()){
		int t=qu.front();
		vs[t]=1;
		qu.pop();
		for(int i=0;i<v[t].size();i++){
			if(vs[v[t][i]]==0){
				qu.push(v[t][i]);
				path[v[t][i]] = t;
				vs[v[t][i]]=1;
			}
		}
		
	}
	if(path[s]){
		int k=s;
		vector <int> result;
		while(k){
			result.push_back(k);
			k=path[k];
		}
		for(int i=result.size()-1;i >= 0;i--) cout<<result[i]<<" ";
	}
	else cout<<-1;
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
