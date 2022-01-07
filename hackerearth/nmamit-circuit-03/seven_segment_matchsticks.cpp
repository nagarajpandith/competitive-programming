#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[10]={6,2,5,5,4,5,6,3,7,6,},i,sum=0;
        char n[100];
        cin>>n;
        for(i=0;i<strlen(n);i++)
            sum+= a[(n[i]-48)];
        if(sum%2==1)
            cout<<7;
        else
            cout<<1;
        for(i=1;i<sum/2;i++)
            cout<<1;;
        cout<<"\n";
    }
    return 0;
}