#include<bits/stdc++.h>

using namespace std;
int a[1500];
int k,n;
void result(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void nhap(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
}
void NEXT_combination(){
	int i=k;
	while(i>0&&a[i]==n-k+i){
		i--;
	}
	if(i>0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else{
		for(int i=1;i<=k;i++) a[i]=i;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		NEXT_combination();
		result();
	}

}

