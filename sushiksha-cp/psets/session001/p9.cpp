/* 9. Find the square root of a given, if the given number is not a perfect square, print the floor of the square root, e.g., √27 = 5.19 print 5, √25 is five print 5, √24 is 4.8 print 4
(Please don’t use any inbuilt functions) */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,i=0;
    cin >> a; 
    while(i*i<=a) { 
    if (i*i==a)
        cout<<i;
    else
        cout<<i-1;
    i++; 
    }
    return 0;
}
