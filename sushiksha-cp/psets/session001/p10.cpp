//10. Write a program to print all the odd numbers between two input numbers.(If the given inputs are odd then don’t  include them in the output)
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a+1;i<b;i++) {
        if(i%2!=0)
        cout<<i<<endl;
    }
    return 0;
}