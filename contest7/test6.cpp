#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	getline(cin,s);
	stack<char> a;
	for(int i=0;i<s.length();i++){
		if(s[i] == ')'){
			int kt=1;
			if(!a.empty()){
				char x=a.top();	
				while(x != '('){
					if(x=='+' || x=='-' || x=='*' || x=='/') kt =0;
					a.pop();
					x=a.top();
				}
				a.pop();
			}
			if(kt){
				cout<<"Yes"<<endl;return;
			}
		}
		else{
			a.push(s[i]);
		}
	}
	cout<<"No"<<endl;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}
