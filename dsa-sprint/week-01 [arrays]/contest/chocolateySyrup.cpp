// score: 0/10, only 2 sample test cases passed
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, X, buckets[100];
    cin>>N>>X;
    for (int i=0; i<N; i++)
        cin>>buckets[i];
    buckets[N-1] = buckets[N-1]+X;
    for (int i=0; i<N; i++)
        cout<<buckets[i]<<" ";
    return 0;
}