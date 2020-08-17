#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	getline(cin,s);
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i] == ')'){
			int kt=1;
			if(!st.empty()){
				char x= st.top();
				while(x != '('){
					if(x =='+' or x =='-' or x == '*' or x == '/') kt=0;
					st.pop();
					x=st.top();
				}
				st.pop();
			}
			if(kt){
				cout<<"Yes\n";
				return;
			}
		}
		else st.push(s[i]);
	}
	cout<<"No\n";
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
		
	}

}

