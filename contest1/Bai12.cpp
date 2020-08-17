#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[100];
int check(int n){
	for(int i=0;i<n;i++){
		if(a[i]==0) return 1;
	}
	return 0;
}
int check2(){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==k) return 1;
	else return 0;
}
void sinh(){
	for(int i=n-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			for(int j=i+1;j<n;j++){
				a[j]=0;
			
			}
			break;
		}
		
	}
}
void out(){
	if(check2()==1){
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
	cout<<endl;
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			a[i]=0;
		}
		while(check(n)==1){	
			sinh();
			out();
		}
	}
}

