#include<bits/stdc++.h>

using namespace std;
int n,k,a[15],ok=1;

void next_division(){
	int i=k;
	int j,D,S,R;
	while(a[i]==1 && i>0) i--;
	if(i>0){
		a[i]--;
		D=k-i+1;
		S=D%a[i];R=D/a[i];
		k=i;
		if(R>0){
			for(j=i+1;j<=i+R;j++){
				a[j]=a[i];
			}
			k=k+R;
		}
		if(S>0){
			k++;
			a[k]=S;
		}
	}
	else ok=0;
}

void out(){
	cout<<"(";
	for(int i=1;i<=k;i++){
		cout<<a[i];
		if(i!=k){
			cout<<" ";
		}
	}
	cout<<") ";
}

void result(){
	cin>>n;
	k=1;a[k]=n;
	while(ok==1){
		out();
		next_division();
	}
	ok=1;
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		result();
	}
}

