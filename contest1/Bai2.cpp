//sinh ra to hop chap k cua n
#include <bits/stdc++.h>
#define MAX 1001
using namespace std;
int X[MAX], n, k;
//Thiet lap nghiem ban dau
void Init(void) {
	cin>>n>>k; 
	for(int i=1;i<=k; i++) cin>>X[i];		
}
//Dua ra nghiem hien tai
void Result(void) {
	for(int i=1; i<=k; i++) 
		cout<<X[i]<<" ";
	cout<<endl;
}
//Sinh ra nghiem ke tiep
void Next_Combination(void){
	int i=k; //duyet tu ben phai tap con hien tai
	while(i>0 && X[i]==n-k+i) { //tim i sao cho X[i] khac n-k+i
		i--;
	}
	if(i>0) { //neu tim thay i
		X[i]=X[i] + 1; //tang X[i] len 1
		for(int j=i+1; j<=k; j++) //tu vi tri i+1,..,k
			X[j] = X[i] + j - i;
	}
	else { //neu khong tim thay i
		for(int i=1; i<=k; i++) X[i]=i;
	}		
}
int main(void) {
	int T; cin>>T;	
	while(T--) { 
		Init(); 
		Next_Combination();
		Result();
	}
}
