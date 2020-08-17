#include<bits/stdc++.h>

using namespace std;
//code by xiaoluan
int a[1002][1002];

void solve(){
	int n;
	cin>>n;
//={0};
	memset(a,0,sizeof(a));
	string s;
	int k = 1;
	cin.ignore();
	while(k <= n){
		getline(cin,s);
		int i=0;
		while(i<s.length()){
			int t=0;
			while(i<s.length() && s[i] >= '0' && s[i] <= '9'){
				t=t*10+(s[i]-'0');
				i++;
			}
			if(t) a[k][t]=1;
			
			i++;
		}
		k++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	
	solve();
	
}

