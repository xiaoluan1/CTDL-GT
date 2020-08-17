#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	cin>>s;
	stack<string> st;
	for(int i=0;i<s.length();i++){
		if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] =='/'){
			string t1=st.top();st.pop();
			string t2=st.top();st.pop();
			string t=s[i]+t2+t1;
			st.push(t);
		}
		else{
			string t="";
			t=t+s[i];
			st.push(t);
			
		}
	}
	cout<<st.top()<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		solve();
	}
}

