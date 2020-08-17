#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	long long n;
	cin>>n;
	queue<long long> qu;
	qu.push(1);
	int dem=0;
	while(!qu.empty()){
		long long t=qu.front();
		if(t<=n){
			dem++;
		}
		else{
			break;
		}
			qu.pop();
			qu.push(t*10);
			qu.push(t*10+1);
		
	}
	cout<<dem<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}

}

