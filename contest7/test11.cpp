#include<bits/stdc++.h>
#include<vector>

using namespace std;

int priority(char x){
	if(x=='+' || x=='-') return 1;
	else if(x=='*' || x=='/') return 2;
	else if(x=='^') return 3;
	else return 0;
}

void solve(){
	string s;
	cin>>s;
	stack<char> a;
	for(int i=0;i<s.length();i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i]>='A') && s[i] <= 'Z') cout<<s[i];
		else{
			if(s[i]=='(') a.push(s[i]);
			else if(s[i] ==')'){
				while(!a.empty() && a.top()!='('){
					cout<<a.top();
					a.pop();
				}
				a.pop();
			}
			else if(!a.empty() && priority(a.top()) >= priority(s[i])){
				while(!a.empty() && priority(a.top()) >= priority(s[i])){
					cout<<a.top();
					a.pop();
				}
				a.push(s[i]);
			}
			else a.push(s[i]);
		}
	}
	while(!a.empty()){
		if(a.top()!='(') cout<<a.top();
		a.pop();
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}
