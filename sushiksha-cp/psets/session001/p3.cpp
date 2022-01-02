//3. Write a program to find the sum, product, division and modulo of two integers. i.e.(try to handle edge cases)
//Edge Cases: 1. Overflow when result surpasses int limit 2. Undefined result during div & mod when b=0
#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    long long sum=a+b;
    long long pro=a*b;
    //Initilasing div & mod to 0 in case there's no calculation when b=0
    int div=0;
    int mod=0;
    if(b!=0){
        div=a/b;
        mod=a%b;
    }
    cout<<sum<<endl<<pro<<endl<<div<<endl<<mod;
    return 0;
}