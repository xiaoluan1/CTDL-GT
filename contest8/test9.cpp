#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve(){
	int m,n;
	cin>>n>>m;
	int k=0;
	while(n<m){
		if(m%2>0){
			m++;
			k++;
		}
		else{
			m/=2;
			k++;
		}
	}
	cout<<k+n-m<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

