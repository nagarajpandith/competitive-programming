// https://www.hackerrank.com/contests/flc-test-1/challenges
// https://www.hackerrank.com/contests/flc-test-1/challenges/flc-2
#include<bits/stdc++.h>
using namespace std;
int checkdup(int a[], int n, int k) {
    unordered_set<int> myset;
    for (int i = 0; i < n; i++) {
        if (myset.find(a[i]) != myset.end())
            return 1;
        myset.insert(a[i]);
        if (i >= k)
            myset.erase(a[i-k]);
    }
    return 0;
}
int main () {
    int a[100];
    int n = sizeof(a)/sizeof(a[0]);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if (checkdup(a, n, 3))
        cout << "true";
    else
        cout << "false";
}