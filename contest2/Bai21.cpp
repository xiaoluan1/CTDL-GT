#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		string result="";
		result+=s;
		result+=" ";
		while(next_permutation(s.begin(),s.end())){
			result+=s;
			result+=" ";
		}
		cout<<result<<endl;
	}

}

