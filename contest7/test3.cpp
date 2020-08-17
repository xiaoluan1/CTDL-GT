#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	getline(cin,s);
	stack<char> st;
	for(int i=0;i<=s.length();i++){
		if(s[i] == ' ' || s[i] == '\0'){
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			cout<<" ";
		}
		else{
			st.push(s[i]);
		}
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

