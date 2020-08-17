#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	int k;
	cin>>k>>s;
	int f[100]={0};
	priority_queue<long long> a;
	for(int i=0;i<s.length();i++) f[s[i]]++;
	for(int i=65;i<=90;i++){
		if(f[i]) a.push(f[i]);
	}
	while(k--){
		int t=a.top();
		t--;
		a.pop();
		a.push(t);
	}
	long long ans=0;
	while(!a.empty()){
		ans+=a.top()*a.top();
		a.pop();
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
