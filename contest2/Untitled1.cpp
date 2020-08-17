#include<bits/stdc++.h>

using namespace std;

void chuyen(int n,char a,char b){
	cout<<"\n chuyen dia thu "<<n<<"tu coc "<<a<<"sang coc"<<b;
}
void hanoi(int n,char a,char b,char c){
	if(n==1){
		chuyen(1,a,c);
	}
	else{
		hanoi(n-1,a,c,b);
		chuyen(n,a,c);
		hanoi(n-1,b,a,c);
	}
}

int main(){
	int n;
	char a='A',b='B',c='C';
	cin>>n;
	hanoi(n,a,b,c);
}

