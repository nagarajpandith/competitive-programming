//7. Write a program to input three integers and find the maximum of them using conditional operator
//Conditional Operator syntax: condition ? expriftrue : expriffalse
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    a >= b ? (a >= c ? cout<<a : cout<<c) : (b >= c ? cout<<b : cout<<c);
    return 0;
}
