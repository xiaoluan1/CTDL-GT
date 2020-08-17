#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int k;
	string s;
	cin>>k>>s;
	int f[100]={0};
	priority_queue<long long> q;
	for(int i=0;i<s.length();i++) f[s[i]]++;
	for(int i=65;i<=90;i++){
		if(f[i]) q.push(f[i]);
	}
	while(k--){
		int t=q.top();
		q.pop();
		t--;
		q.push(t);
	}
	long long ans=0;
	while(!q.empty()){
		ans+=q.top()*q.top();
		q.pop();
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
}

