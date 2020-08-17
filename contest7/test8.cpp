#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	stack<char> a;
	
	for(int i=0;i<s.length();i++){
		if(s[i] == ')'){
			stack<char> b;
			while(a.top() != '(' && !a.empty()){
				b.push(a.top());
				a.pop();
			}
			a.pop();
			if(!a.empty()){
				if(a.top() == '-'){
					while(!b.empty()){
						if(b.top() == '-') a.push('+');
						else if(b.top() == '+') a.push('-');
						else a.push(b.top());
						b.pop();
					}
				}
				else{
					while(!b.empty()){
						a.push(b.top());
						b.pop();
					}
				}
			}
			else{
				while(!b.empty()){
						a.push(b.top());
						b.pop();
					}
			}
			
		}
		else a.push(s[i]);
	}
	string result="";
	while(!a.empty()){
		result+=a.top();
		a.pop();
	}
	for(int i=result.length()-1;i>=0;i--) cout<<result[i];
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
