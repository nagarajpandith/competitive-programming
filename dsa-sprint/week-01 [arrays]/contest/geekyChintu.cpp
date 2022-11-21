//score: 7.5/10
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a[1000];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    int ans = 0;
    for (int i=0;i<n;i++)
        ans = ans^a[i];
    if (ans)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}