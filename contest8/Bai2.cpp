#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

	queue<int> qu;
	string s;
void solve(){

	cin>>s;
	if(s=="PUSH"){
		int x;cin>>x;
		qu.push(x);
	}
	else if(s=="POP"){
		if(!qu.empty()){
			qu.pop();
		}
	}
	else{
		if(!qu.empty()){
			cout<<qu.front()<<endl;
		}
		else cout<<"NONE"<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
		
	}
	
}

