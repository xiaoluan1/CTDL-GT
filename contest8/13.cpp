#include<bits/stdc++.h>

using namespace std;


int check(int a){
	vector<int> v(10,0);
	while(a){
		if(v[a%10]) return 0;
		v[a%10]=1;
		a/=10;
	}
	return 1;
}
void solve(){
	int a,b;
	cin>>a>>b;
	queue<int> q;
	int ans=0;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	while(!q.empty()){
		int t=q.front();
		q.pop();
		if(t>=a && t<=b) ans++;
		for(int i=0;i<=5;i++){
			if((10*t+i) <=b && check((10*t+i))) q.push(10*t+i);
		}
	}
	cout<<ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
