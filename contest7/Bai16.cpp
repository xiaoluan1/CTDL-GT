#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	cin>>s;
	stack<int> st;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i] <= '9'){
			st.push(s[i]-'0');
		}
		else{
			int a=st.top();st.pop();
			int b=st.top();st.pop();
			if(s[i] == '*') st.push(a*b);
            if(s[i] == '/') st.push(b/a);
            if(s[i] == '+') st.push(a+b);
            if(s[i] == '-') st.push(b-a);
			
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

