#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	stack<string> a;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i] == '+' ||s[i] == '-' || s[i] == '*' || s[i] == '/'){
				string t1=a.top();a.pop();
				string t2=a.top();a.pop();
				string t=t1+t2+s[i];
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
	cin.ignore();
	while(t--){
		solve();
	}
}
