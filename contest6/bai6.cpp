#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
long n;
void solve(){
	cin>>n;
	int a[n+3];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}
}

