#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	stack<int> a;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			a.push(s[i]-'0');
		}
		else{
			int b=a.top();a.pop();
			int c=a.top();a.pop();
			if(s[i] == '+') a.push(c+b);
			if(s[i]=='-') a.push(c-b);
			if(s[i]=='*') a.push(c*b);
		    if(s[i]=='/') a.push(c/b);
		}
	}
	cout<<a.top()<<endl;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}
