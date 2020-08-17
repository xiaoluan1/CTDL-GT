#include<bits/stdc++.h>

using namespace std;
//code by xiaoluan
void solve(){
	int m,n,x,y;
	cin>>n>>m;
	vector<int> v[n+1];
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
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
