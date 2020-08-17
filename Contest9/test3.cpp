#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int n;	int x;
	cin>>n;
	vector<vector<int> > v(n+2);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>x;
			if(x==1) v[i].push_back(j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	solve();
}
