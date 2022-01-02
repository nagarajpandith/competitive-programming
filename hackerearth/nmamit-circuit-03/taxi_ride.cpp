#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll d; cin >> d;
    ll oc, of, od; cin >> oc >> of >> od;
    ll cs, cb, cm, cd; cin >> cs >> cb >> cm >> cd;
    ll online = (d <= of)?oc:oc + (od * (d - of));
    ll timeClassic = d / cs;
    ll classic = cb + timeClassic * cm + cd * d;

    if(online <= classic) cout << "Online Taxi" << endl;
        else cout << "Classic Taxi" << endl;
}