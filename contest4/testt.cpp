#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;
int a[100002];
int n,k;
int binarysearch(int L,int H){

	while(L<=H){
		int mid=(H-L)/2+L;
		if(k>a[mid]) L=mid+1;
		else if(k<a[mid]) H=mid-1;
		else return mid;
	}
	return -1;
}

void nhap(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		int s=binarysearch(1,n);
		if(s==-1) cout<<"NO"<<endl;
		else cout<<s<<endl;
	}
	
}

