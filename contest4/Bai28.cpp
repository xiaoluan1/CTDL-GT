#include<bits/stdc++.h>

using namespace std;
long n;
long a[100001];
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long result=n;
	int mid=n/2;
	for(int i=0;i<n/2;i++){
		while(mid<n){
			if(2*a[i]<=a[mid]){
			result--;
			mid++;
			break;
		}
		else{
			mid++;
		}
		}
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

