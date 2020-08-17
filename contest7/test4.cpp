#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i] == '{' || s[i] == '[' || s[i] == '('){
			st.push(s[i]);
		}
		else{
			if(st.empty()){
				cout<<"NO\n";return;
			}
			else if(s[i] == ')'){
				if(st.top() != '('){
					cout<<"NO";return;
				}
				st.pop();
			}
			else if(s[i] == ']'){
				if(st.top() != '['){
					cout<<"NO";return;
				}
				st.pop();
			}
			else if(s[i] = '}'){
				if(st.top() != '{'){
					cout<<"NO";return;
				}
				st.pop();
			}
		}
	}
	if(st.size()) cout<<"NO\n";
	cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
