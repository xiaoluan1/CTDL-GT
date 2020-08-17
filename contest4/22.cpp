#include<bits/stdc++.h>

using namespace std;
int a[100002];
int n,k;

int searchBinary(int L,int H){
	while(L <= H){
		int mid=L+(H-L)/2;
		if(a[mid]==k) return mid;
		else if(a[mid]<k) L=mid+1;
		else H=mid-1;
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
		int s=searchBinary(1,n);
		if(s==-1) cout<<"NO"<<endl;
		else cout<<s<<endl;
	}
}

