#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nz=0,no=0;
    string s;
    cin>>s;
        for(int i=0;i<s.length();i++)
        {
        if(s[i]=='a'||s[i]=='A') nz++;
        else no++;
        }
        if(2*nz==no)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
return 0;
}