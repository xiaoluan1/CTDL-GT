#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	vector <int> vs(a+2,0);
	vector <int> v[a+2];
	for(int i=1;i<=b;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue <int> qu;
	qu.push(c);
	int path[10005]={0};
	while(!qu.empty()){
		int t=qu.front();
		vs[t]=1;
		cout<<t<<" ";
		qu.pop();
		for(int i=0;i<v[t][i].size();i++){
			if(vs[v[t][i]] == 0){
				qu.push(v[t][i]);
				path[v[t][i]] = t;
				vs[v[t][i]] = 1;
			}
		}
	}
	if(path(d)){
		
		vector <int> result;
		while(t){
			
		}
	}
}

int main(){
	
	
}
