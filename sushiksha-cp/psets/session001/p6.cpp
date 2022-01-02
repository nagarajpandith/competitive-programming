/* 6. Write a program to input two numbers and print “foo” if both the numbers are odd and “bar” if both the numbers are even and “foobar” if one number is odd and the other number is even. */
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(a%2!=0&&b%2!=0) 
    cout<<"foo";
    else if(a%2==0&&b%2==0)
    cout<<"bar";
    else
    cout<<"foobar";
    return 0;
}