#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int testcases = 0, testt = 1;
cin >> testt;
    while (testcases++ < testt){
        ll n;cin>>n;
        vector <ll> a(n),b(n);
        for(ll i=0;i<n;i++) {
            cin>>a[i], b[i] = a[i];
        }
        sort(b.begin(), b.end());
        ll st = n-1;
        ll ans = 0;
        while(st>0) {
            if(a[st]!=b[st]) {
                ll ma = b[st],mi = a[st];
                ll i = st;
                while(i>0) {
                    if(a[i]!=b[st]) i--;
                    else break;
                    mi = min(a[i],mi);
                }
                ll pos = lower_bound(b.begin(), b.end(),mi) - b.begin();
                for(ll j=pos;j<i;j++) mi = min(mi,a[j]);
                while(b[pos]!=mi) {
                    pos = lower_bound(b.begin(), b.end(),mi) - b.begin();
                    for(ll j=pos;j<i;j++) mi = min(mi,a[j]);
                }
                ans+=(ma-mi);
                st = pos-1;
            }
            else st-=1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}