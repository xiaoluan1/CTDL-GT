#include<bits/stdc++.h>
#include<vector>

using namespace std;

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
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			if(st.empty()){
				cout<<"empty"<<endl;
				continue;
			}
			else{
				stack<int> kt=st;
				vector <int> v;
				while(!kt.empty()){
					v.push_back(kt.top());
					kt.pop();
				}
				for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
			}
		
		}
	
	}
	
}

int main(){
	solve();
}

