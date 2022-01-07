#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    vector<ll>temp(64,0);
    for(ll i=0;i<n;i++)
    {
        ll m=v[i];
        ll c=0;
        while(m)
        {
            if(m%2==1)
            {
               temp[c]++;
            }
            m=m/2;
            c++;
        }
    }
    ll res=0;
    for(ll i=0;i<64;i++)
    {
        if(temp[i]>1)
            res+=pow(2,i);
    }
    cout<<res<<endl;
}

int main()
{
    ll tcase = 1;
    cin>>tcase;

    while(tcase--) {
        solve();
    }
    return 0;
}