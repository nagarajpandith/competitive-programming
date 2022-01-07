//Score: 51.56 Failed 3 TC
#include <bits/stdc++.h>
using namespace std;
#define N 5
int func(int index, int current, int a[], int d_p[N][3], int n, int x)
{
    if (index == n)
        return 0;
    if (d_p[index][current] != -1)
        return d_p[index][current];
    int ans = 0;
    if (current == 0) {
        ans = max(ans, a[index] + func(index + 1, 0, a, d_p, n, x));
        ans = max(ans, x * a[index] + func(index + 1, 1, a, d_p, n, x));
    }
    else if (current == 1) {
        ans = max(ans, x * a[index] + func(index + 1, 1, a, d_p, n, x));
        ans = max(ans, a[index] + func(index + 1, 2, a, d_p, n, x));
    }
    else
        ans = max(ans, a[index] + func(index + 1, 2, a, d_p, n, x));
    return d_p[index][current] = ans;
}
int maxsum(int a[], int n, int x)
{
    int d_p[n][3];
    memset(d_p, -1, sizeof d_p);
    int maxi = 0;
    for (int i = 0; i < n; i++)
        maxi = max(maxi, func(i, 0, a, d_p, n, x));
    return maxi;
}
 
int main()
{
int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    cout << maxsum(a, n, x);
    return 0;
}