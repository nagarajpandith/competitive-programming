#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n;cin>>n;
    string s;cin>>s;
    string ans = "AC";
    for(ll i=0;i<n-3;i++) {
        if(s[i]=='c'&&s[i+1]=='o'&&s[i+2]=='d'&&s[i+3]=='e') break;
        if(s[i]=='c'&&s[i+1]=='h'&&s[i+2]=='e'&&s[i+3]=='f') {
            ans = "WA";
            break;
        }
    }
    cout<<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}