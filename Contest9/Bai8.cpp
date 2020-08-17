#include<bits/stdc++.h>
#include<vector>

using namespace std;
//vector<int> v[1005];
//vector<int> vs(1005);

void solve(){
	int m,n,x,y,u;
	cin>>n>>m>>u;
	vector<int> v[n+2];
	vector<int> vs(n+1,0);
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t=q.front();
		cout<<t<<" ";
		vs[t]=1;
		q.pop();
		for(int i = 0;i < v[t].size();i++){
			if(vs[v[t][i]] == 0){
				q.push(v[t][i]);
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
	solve()	;
		
	}
	
}
