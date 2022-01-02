//2. Write a program to input an integer and output, square and cube of the integer. (try to handle edge cases)
//Edge Cases: Overflow when result surpasses int limit
#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    // Partially correct solution: cout<<a*a<<endl<<a*a*a; 
    long long a1=a; //Implicit Type Conversion to avoid Overflow
    long long a2=a;
    a1=a1*a1;
    a2=a2*a2*a2;
    cout<<a1<<endl<<a2;
    return 0;
}