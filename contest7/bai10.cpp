#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

string solve(string s){
	stack<char> st;
	vector<char> f;
	for(int i=0;i<s.length();i++){
		if(s[i] == ')'){
			stack<char> tmp;
			while(st.top() != '(' && !st.empty()){
				tmp.push(st.top());
				st.pop();
			}		
			if(!st.empty()) st.pop();
			
			if(!st.empty()){
				if(st.top() == '-'){
					while(!tmp.empty()){
						if(tmp.top() == '+') st.push('-');
						else if(tmp.top() == '-') st.push('+');
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
	string ans="",t="";
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
	
	for(int i=ans.length()-1;i>=0;i--) t+=ans[i];
	return t;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		a=solve(a);
		b=solve(b);
		if(a==b){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}

