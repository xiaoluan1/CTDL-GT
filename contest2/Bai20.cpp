#include<bits/stdc++.h>

using namespace std;
vector<int> arr;
int a[1001];
void temp(int n){
	for(int i=n;i>0;i--){
		arr.push_back(a[i]);
	}
}

void solve(int n){
	if(n==0) return;
	else{
		temp(n);
	for(int i=1;i<n;i++){
		a[i]=a[i]+a[i+1];
	}
	
	solve(n-1);
	}
	
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		solve(n);
		int k=arr.size() - 1;
		for(int i=1;i<=n;i++){
			cout<<"[";
			for(int j=0;j<i-1;j++){
				cout<<arr[k--]<<" ";
			}
			cout<<arr[k--]<<"] ";
		}
		cout<<endl;
		
	}
}

