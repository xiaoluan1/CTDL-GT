#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

int n,a[101];
void bubblesort(){
	for(int i=1;i<=n;i++){
		int k=0;
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				k=1;
			}
		}
		if(k){
				cout<<"Buoc "<<i<<": ";
				for(int i=1;i<=n;i++){
					cout<<a[i]<<" ";
				}
				cout<<endl;
		}
		else{
			break;
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	bubblesort();
}

