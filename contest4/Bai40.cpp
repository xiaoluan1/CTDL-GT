#include<bits/stdc++.h>

using namespace std;
int a[1002],n;

void solve(){
	cin>>n;
	int x;
	int result=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x==0) result++;
	}
	cout<<result<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

