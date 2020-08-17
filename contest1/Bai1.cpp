#include<bits/stdc++.h>

using namespace std;
int n;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		n=s.length();
		int i=n-1;
		while(i>=0&&s[i]=='1'){
			s[i]='0';i--;
		}
		if(i>=0) s[i]='1';
		cout<<s<<endl;
	}
}
// 10100 10011
