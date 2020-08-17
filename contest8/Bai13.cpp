#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

int check(int a){
	vector<int> v(10,0);
	while(a){
		if(v[a%10]) return 0;
		v[a%10] =1;
		a/=10;
	}
	return 1;
}

int sok(int a,int b){
	queue<int> q;
	for(int i=1;i<=5;i++) q.push(i);
	int ans=0;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		if(t<=b && t>=a) ans++;
		for(int i=0;i<=5;i++){
			if((t*10+i) <= b && check(t*10+i)) q.push(t*10+i);		
		}
	}
	return ans;
}

void res(){
	int s,r;
	cin>>s>>r;
	cout<<sok(s,r)<<endl;
	
}

int main(){
int t;
cin>>t;
while(t--){
	res();
}

}

