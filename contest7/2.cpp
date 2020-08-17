#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int t;
	cin>>t;
	string s;
	stack<int> st;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			st.push(x);
		}
		else if(s=="POP"){
			if(!st.empty()){
				st.pop();
			}	
		}
		else{
			if(st.empty()){
				cout<<"NONE"<<endl;
			}
			else{
				cout<<st.top()<<endl;
			}
		}
	}
}

int main(){
	solve();
}
