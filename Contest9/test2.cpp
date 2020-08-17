#include<bits/stdc++.h>
#include<vector>

using namespace std;
string s;
int n;
void solve(){
	cin>>n;
	cin.ignore();
	vector<pair<int,int> > a;
	for(int i=1;i<=n;i++){
		getline(cin,s);
		istringstream kk (s);
		int j;
		while(kk>>j){
			if(i<j) a.push_back(make_pair(i,j));
		}
	}
	for(int i=0;i<s.size();i++){
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}
}

int main(){
	solve();
}
