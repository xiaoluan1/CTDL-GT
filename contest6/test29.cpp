#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    For(i,1,n-1){//for(int i=1;i<=n;i++)
        int kt=0;
        For(j,1,n-i){//for(int i=1;i<=n-i;i++)
            if(a[j]>a[j+1]) {swap(a[j+1],a[j]);kt=1;}
        }
        if(kt){
            cout<<"Buoc "<<i<<": ";
            For(i,1,n) cout<<a[i]<<" ";
            cout<<endl;
        }
        else break;
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}

/*
 		4
 		7 5 3 2
 		5 3 2 7
 		2 3 5 7
*/
