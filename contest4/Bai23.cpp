#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n,k;
 
void solve(){
    cin >> n >> k;
    ll i = 1;
    while( (k-i) % (i*2) != 0 ) i <<= 1;
    cout << log2(i) + 1 << endl;
 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
