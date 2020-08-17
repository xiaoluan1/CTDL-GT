#include<bits/stdc++.h>

using namespace std;

string a,b;
int k;
void solve(){
	cin>>k>>a>>b;
	int m=0;
	int n=0;
	for(int i=0;i<a.length();i++){
		n=n*k+(a[i]-'0');
	}
	for(int j=0;j<b.length();j++){
		m=m*k+(b[j]-'0');
	}
	int result=m+n;
	vector <int> answer;
	while(result > 0){
		answer.push_back(result%k);
		result/=k;
	}
	for(int i=answer.size()-1;i>=0;i--){
		cout<<answer[i];
	}
}

int main(){
	solve();
}

