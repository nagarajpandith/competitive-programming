#include <bits/stdc++.h>
using namespace std;
void calc() 
{
    long long n;
    cin >> n;

    vector<long long> vec(n);

    for( long long i = 0; i < n; i++ ){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());
    
    cout << (vec[n-1]-vec[0])*vec[n-2] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    long long t;
    cin >> t;
    while(t--){
       calc();
    }
    return 0;

}