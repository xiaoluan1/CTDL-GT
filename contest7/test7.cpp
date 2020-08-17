#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	stack<char> a;
	int d=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == '(') a.push(s[i]);
		else{
			if(!a.empty()) a.pop();
			else{
				d++;
			}
		}
	}
	cout<< d/2 +a.size()/2 +d%2 + a.size()%2 <<endl;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}
