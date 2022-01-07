#include <iostream>
#include <cmath>
using namespace std;

typedef long long int lli;
typedef long long ll;

const lli mod7=1e9+7;

const int MAXXFF=1e5;

lli fact[MAXXFF+1];
//Took help from https://codeforces.com/blog/entry/78873
ll codefpowmod(ll a, ll b, ll p){
    a %= p;
    if (a == 0) return 0;
    ll prd = 1;
    while(b > 0){
        if (b&1){    
            prd *= a;
            prd %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    
    }
    return prd;
}

ll inv(ll a, ll p){
    return codefpowmod(a, p-2, p);
}

ll nCk(ll n, ll k, ll p){
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n-k], p)) % p;
}

lli last_elem(int level) {
return ((level+1)*level)/2;
}

pair<lli,lli> getlevelindex(lli n) {
	lli level=-1;
	lli index=-1;

	if(n==1){
		return {1,1};
	}

	lli st=2;
	lli end=1+ceil(sqrt(2*n));

	while(st<=end) {
		level=(st+end)/2;
		if(last_elem(level)>=n&&last_elem(level-1)<n) {
			break;
		}
		else if(last_elem(level)>n) {
			end=level-1;
		}
		else {
			st=level+1;
		}
	}
	index=n-(level*(level-1))/2;
	return {level,index};
}

int main() {
	fact[0]=1;
	fact[1]=1;
	for(int i=2;i<=MAXXFF;i++){
			fact[i]=(fact[i-1]*i)%mod7;
	}

	int t;
	cin>>t;
	while(t--){
		lli s,e;
		cin>>s>>e;

		pair<lli,lli> res1,res2;
		res1=getlevelindex(s);
		res2=getlevelindex(e);

		lli slvl=res1.first;
		lli sidx=res1.second;
		lli elvl=res2.first;
		lli eidx=res2.second;

		lli L=elvl-slvl;
		lli K=eidx-sidx;

		lli ans=-1;

		if(L<=0||K<0||K>L){
			ans=0;
		}
		else{
			ans=nCk(L,K,mod7);
		}
		cout<<ans<<endl;
	}
	return 0;
}
