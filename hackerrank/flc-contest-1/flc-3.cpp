// https://www.hackerrank.com/contests/flc-test-1/challenges
// https://www.hackerrank.com/contests/flc-test-1/challenges/flc-2
#include<bits/stdc++.h>
using namespace std;
int maxarrsum(int a[], int size) {
    int max1 = INT_MIN, max2 = 0;
    for (int i = 0; i < size; i++) {
        max2 = max2 + a[i];
        if (max1 < max2)
            max1 = max2;
        if (max2 < 0)
            max2 = 0;
    }
    return max1;
}
int main() {
    int a[100];
    int n = sizeof(a)/sizeof(a[0]);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max_sum = maxarrsum(a, n);
    cout << max_sum;
    return 0;
}