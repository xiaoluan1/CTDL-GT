#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{' ){
			st.push(s[i]);
		}
		else{
			if(st.empty()){
				cout<<"NO"<<endl;
				return;
			}
			else if(s[i] == ')'){
				if(st.top() != '('){
					cout<<"NO"<<endl;
					return;
				}
				st.pop();
			}
			else if(s[i] == ']'){
				if(st.top() != '['){
					cout<<"NO"<<endl;
					return;
				}
				st.pop();
			}
			else if(s[i] == '}'){
				if(st.top() != '{'){
					cout<<"NO"<<endl;
					return;
				}
				st.pop();
			}
			
		}
		
	}
	if(st.empty()) cout<<"YES"<<endl;
	else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}
	
}

