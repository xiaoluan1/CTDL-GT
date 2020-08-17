#include<bits/stdc++.h>

using namespace std;
int n;int a[1500];
void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void result(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void solve(){
	int j=n-1;
	while(j>0&&a[j]>a[j+1]) j--;
	if(j>0){
		int k=n;
		while(a[j]>a[k]) k--;
		int temp=a[j];a[j]=a[k];a[k]=temp;
		int r=j+1;int s=n;
		while(r<=s){
			int h=a[r];a[r]=a[s];a[s]=h;
			s--;r++;
		}
	}else{
		for(int i=1;i<=n;i++) a[i]=i;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve();
		result();
	}
}

