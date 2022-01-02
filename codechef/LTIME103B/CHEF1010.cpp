#include <bits/stdc++.h>
using namespace std;
#define ll long long
void calc() {
    ll n;cin>>n;
    string s;cin>>s;
    ll c1 = 0,c0=0;
    for(ll i=0;i<n;i++) if(s[i]=='1') c1++; else c0++;
    ll res = 0;
    res = max(res,min(c0,c1)-1);
    cout<<res<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        calc();
    }
}