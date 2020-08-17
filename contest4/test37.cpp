#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
long n,x;
int solve(ll a[],ll L,ll H){
	if(x<a[L]) return -1;
	if(x>a[H]) return H;
	int mid=L+(H-L)/2;
	if(a[mid] <= x && a[mid+1]>x) return mid;
	if(a[mid]<x) return solve(a,mid+1,H);
	else return solve(a,L,mid-1);	
}
void nhap(){
	cin>>n>>x;
	ll a[n+2];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<solve(a,1,n)<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
	}
}

