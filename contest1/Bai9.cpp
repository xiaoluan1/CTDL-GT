#include<bits/stdc++.h>

using namespace std;
int n;
void gray1(){
	if(n<=0) return;
	vector <string> arr;
	arr.push_back("0");
	arr.push_back("1");
	for(int i=2;i<pow(2,n);i=i*2){
		for(int j=i-1;j>=0;j--){
			arr.push_back(arr[j]);
		}
		for(int j=0;j<i;j++){
			arr[j]="0"+arr[j];
		}
		for(int j=i;j<2*i;j++){
			arr[j]="1"+arr[j];
		}
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		gray1();
	}
}

