#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
#define ld long double
#define mod 1000000007
#define vi vector<lli>
#define precision(x,y)         fixed<<setprecision(y)<<x
#define sort(a) sort(a.begin(),a.end())
//first idx >= val
#define lb(a,x) lower_bound(a.begin(),a.end(),x)-a.begin()
//first idx > val
#define ub(a,x) upper_bound(a.begin(),a.end(),x)-a.begin()
using namespace std;
int u_b(vector<int>& a, int x){
    int l = 0, r = a.size()-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]>x)
            l = mid + 1;
        else{
            ans = mid;
            r = mid - 1;
        }
    }
    return ans;
}
void solve(){
    int n,x;
    cin>>n>>x;
    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a);
    // for(auto x: a)
    //     cout<<x<<" ";
    int c=0;
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x)
            i++;
        j--;
        c++;
    }
    cout<<c<<endl;
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
