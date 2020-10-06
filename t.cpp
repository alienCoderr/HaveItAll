#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
using namespace std;
ulli fun(ulli a, ulli b, ulli mod){
 
    ulli ans=1;
    while(b>0){
        if(b&1)
            ans=((ans%mod)*(a%mod))%mod;
        b/=2;
        a = ((a%mod)*(a%mod))%mod;
    }
    return ans%mod;
}
void solve(){
    ulli a, b, c;
    cin>>a>>b>>c;
    cout<<fun(a,fun(b,c,1000000006),1000000007)<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
