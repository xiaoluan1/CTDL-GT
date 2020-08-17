#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int t;
	cin>>t;
	string s;
	deque<int> q;
	while(t--){
		cin>>s;
		if(s=="PUSHFRONT"){
			int x;cin>>x;
			q.push_front(x);
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()){
				cout<<q.front()<<endl;
			}
			else cout<<"NONE"<<endl;
		}
		else if(s=="POPFRONT"){
			if(!q.empty()){
				q.pop_front();
			}
		}
		else if(s=="PUSHBACK"){
			int z;cin>>z;
			q.push_back(z);
		}
		else if(s=="PRINTBACK"){
			if(!q.empty()){
				cout<<q.back()<<endl;
			}
			else cout<<"NONE"<<endl;
		}
		else{
			if(!q.empty()){
				q.pop_back();
				
			}
		}
	}
}

int main(){

solve();
}

