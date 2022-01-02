#include <iostream>
using namespace std;
#define ll long long
void solve() {
    ll a,b,c,d;cin>>a>>b>>c>>d;
    if(a>=b) b+=c;
    else a+=c;
    if(a>=b) b+=d;
    else a+=d;
    if(a>=b) cout<<"N\n";
    else cout<<"S\n";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    solve();
	}
	return 0;
}
