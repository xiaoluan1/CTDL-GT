#include<bits/stdc++.h>
//code by xiaoluan
using namespace std;

typedef long long ll;
ll const mod=1e9+7;

int f[100005];
map<string,int> mp;

int toInt(string s){
	int ans=0;
	for(int i=0;i<s.length();i++){
		ans=ans*10+(s[i]-'0');
	}
	return ans;
}

int sang(int n){
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=i*2;j<=n;j+=i) f[j]=1;
	}
}

int snt(int n){
	if(f[n]==0){
		return 1;
	}
	return 0;
}

int BFS(queue<pair<string,int> > q,string m){
	while(!q.empty()){
		string fr=q.front().first;
		int step=q.front().second;
		q.pop();
		if(fr == m) return step;
		for(int i=fr.length()-1;i>=0;i--){
			string t=fr;
			for(char j='9';j>='0';j--){
				if(i==0 && j== '0') continue;
				if(fr[i] != j) t[i] =j;
				if(snt(toInt(t)) && mp[t]==0){
					if(t==m) return step+1;
					q.push(make_pair(t,step+1));
					mp[t]=1;
				}
			}
		}
	}
}

void result(){
	string m,n;
	cin>>n>>m;
	queue<pair<string,int> > q;
	q.push(make_pair(n,0));
	cout<<BFS(q,m)<<endl;;
	mp.clear();
}

int main(){
	int t;
	cin>>t;
	memset(f,sizeof(f),0);
	sang(100000);
	while(t--){
		result();
		
	}
}

