#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n,x;
	cin>>n;
	vector<vector<int> > v(n+1);// dây là khai báo 1 m?ng 2 chi?u vector
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>x;
			if(x == 1) v[i].push_back(j);
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
