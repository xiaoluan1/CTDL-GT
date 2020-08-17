#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
long long n,k;

void in(){
	cin>>n>>k;
	long long a[n+2];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(a[1]>k){
		cout<<"-1";
	}
	else{
		for(ll i=n;i>=1;i--){
		if(a[i] <= k){
			cout<<i;
			break;
		}	
	}
	}
	cout<<endl;
}

//ll searchbinary(ll L,ll H){
//	while(L<H){
//		ll mid=L+(H-L)/2;
//		if(a[mid]==k) return mid;
//		if(a[mid]<k) return ;
//		else H=mid-1;
//	}
//	return -1;
//}

int main(){
	int t;
	cin>>t;
	while(t--){
		in();
		
	}
}

