#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int s;
	cin>>s;
	queue<int> q;
	int x;
	while(s--){
		cin>>x;
		switch (x){
			case 1:
				cout<<q.size()<<endl;
				break;
			case 2:
				if(!q.empty()) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
				break;
			case 3:
				int k;cin>>k;
				q.push(k);
				break;
			case 4:
				if(!q.empty()) q.pop();
				break;
			case 5:
				if(!q.empty()){
					cout<<q.front()<<endl;
				}
				else cout<<"-1"<<endl;
				break;
			case 6:
				if(q.empty()) cout<<"-1"<<endl;
				else{
					queue<int> qq = q;
					int i;
					while(!qq.empty()){
						i=qq.front();
						qq.pop();
					}
					cout<<i<<endl;
				}
				break;
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}

}

