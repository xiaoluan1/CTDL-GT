#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin>>s;
	int d=0,ans=0;
	vector<int> f(s.length()+3,0);
	stack<pair<char,int> > st;
	for(int i=0;i<s.length();i++){
		if(s[i] == '(') st.push(make_pair(s[i],i));
		else{
			if(!st.empty()){
				int pos = st.top().second;
				d = i-pos+1;
				if(pos>0) d=d+f[pos-1];
				st.pop();
				f[i]=d;
				ans=max(ans,d);
			}
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
