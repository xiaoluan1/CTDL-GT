#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	string s;
	stack<int> st;
	while(cin>>s){
		if(s=="push"){
			int x;
			cin>>x;
			st.push(x);
		}
		else if(s=="pop"){
			if(!st.empty()) st.pop();
			
		}
		else{
			if(st.empty()){
				cout<<"empty\n";
				continue;
			}
			stack<int> tmp = st;
			vector<int> v;
			while(!tmp.empty()){
				v.push_back(tmp.top());
				tmp.pop();
			}
			for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
			cout<<endl;
		}
		
	}
}

int main(){
	solve();

}

