#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	cin>>s;
	stack<char> st;
	int d=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == '(') st.push(s[i]);
		else{
			if(!st.empty()) st.pop();
			else d++;
		}
	}
	cout<< d/2 + st.size()/2 + d%2 + st.size()%2<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}

}

