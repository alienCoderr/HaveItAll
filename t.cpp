#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
#define ld long double
#define vi vector<lli>
#define precision(x,y)         fixed<<setprecision(y)<<x
using namespace std;
int ans = 0;
int diameter(vector<vector<int>>& g, int src, int par){

    int a = -1, b = -1;
    for(auto x: g[src]){
        if(x == par)
            continue;
        int len = diameter(g, x, src);
        if(len >= b){
            a = b;
            b = len;
        }else if(len > a && len <= b)
            a = len;
    }

    if(a!=-1 && b!=-1){
        ans=max(ans, a+b+2);
        return max(a+1, b+1);
    }
    //a=-1, b!=-1
    if(b!=-1){
        ans=max(ans,b+1);
        return b+1;
    }
    //a=-1, b=-1
    return 0;
}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> g(n);
    int t=n-1;
    while(t--){
        int a,b;
        cin>>a>>b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    ans = 0;
    diameter(g, 0, -1);
    cout<<ans<<endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}

