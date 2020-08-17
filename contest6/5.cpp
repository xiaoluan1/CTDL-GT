#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

void solve(){
	int m,n;
	cin>>n>>m;
	long a[n+2],b[m+2];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	vector<int> f;
	int i=1,j=1;
	while(i<=n && j<=m){
		if(a[i]<b[j]) cout<<a[i++]<<" ";
		else if(a[i]>b[j]) cout<<b[j++]<<" ";
		else{
			cout<<a[i]<<" ";
			f.push_back(a[i]);
			i++;j++;
		}
	}
	while(i<=n) cout<<a[i++]<<" ";
	while(j<=m) cout<<b[j++]<<" ";
	cout<<endl;
	if(f.size()){
		for(int i=0;i<f.size();i++){
			cout<<f[i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

