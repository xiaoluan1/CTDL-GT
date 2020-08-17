#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

int priority(char x){
	if(x == '+' or x == '-') return 1;
    if(x == '*' or x =='/') return 2;
    if(x == '^') return 3;
	else return 0;
}

void solve(){
	string s;
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) cout<<s[i];
		else{
		    if(s[i]=='(') st.push(s[i]);
			else if(s[i] == ')'){
				while(!st.empty() && st.top() != '('){
					cout<<st.top();
					st.pop();
				}
				st.pop();
			}
			else if(!st.empty() && priority(st.top()) >= priority(s[i])){
				while(!st.empty() && priority(st.top()) >= priority(s[i])){
					cout<<st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else{
				st.push(s[i]);
			}
		}
		
	}
	 while(!st.empty()){
        if(st.top() != '(') cout<<st.top();
        st.pop();
    }
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		solve();
		
	}

}

