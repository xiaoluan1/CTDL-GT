#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	stack<string> a;
	for(int i=0;i<s.length();i++){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			string t1=a.top();a.pop();
			string t2=a.top();a.pop();
			string t=s[i]+t2+t1;
			a.push(t);
		}
		else{
			string t="";
			t=t+s[i];
			a.push(t);
		}
	}
	cout<<a.top()<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
