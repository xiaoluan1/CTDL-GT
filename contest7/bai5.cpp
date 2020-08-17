#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	cin>>s;
	stack<pair<char,int> > st;
	int ans=0,d=0;
	vector<int> f(s.length()+5,0);
	for(int i=0;i<s.length();i++){
		if(s[i] == ')'){
			if(!st.empty()){
				int position=st.top().second;
				d=i-position+1;
				if(position>0) d=d+f[position-1];
				st.pop();
				f[i]=d;
				ans=max(ans,d);
			}
		}
		else st.push(make_pair(s[i],i));
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

