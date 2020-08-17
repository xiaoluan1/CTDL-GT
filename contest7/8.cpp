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
		if(s[i] == ')'){
			stack<char> tmp;
			while(!st.empty() && st.top() != '('){
				tmp.push(st.top());
				st.pop();
			}
			if(!st.empty()) st.pop();
			
			if(!st.empty()){
				if(st.top() == '-'){
					while(!tmp.empty()){
						if(tmp.top()=='+') st.push('-');
						else if(tmp.top()=='-') st.push('+');
						else st.push(tmp.top());
						tmp.pop();
					}
					
				}
				else{
					while(!tmp.empty()){
						st.push(tmp.top());
						tmp.pop();
					}
				}
			}
			else{
				while(!tmp.empty()){
					st.push(tmp.top());
					tmp.pop();
				}
			}
		}
		else{		
				st.push(s[i]);
			}
		}
		string ans="";
		while(!st.empty()){
			ans+=st.top();
			st.pop();
		}
		for(int i=ans.length()-1;i>=0;i--) cout<<ans[i];
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();	
		
	}

}

