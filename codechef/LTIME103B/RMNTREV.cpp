#include <bits/stdc++.h>
using namespace std;
void calc()
{
    int n,kcount;
    cin>>n>>kcount;
    string s;
    cin>>s;
    string res="";
    int  it1=(kcount/2),it2=(kcount/2)-1;
    if(kcount%2==1)
    {
        cout<<s[it1];
        it1++;
    }
    for(int i=0;i<kcount/2;i++)
    {
         cout<<s[it1];
        cout<<s[it2];
        it2--;
        it1++;
    }
    cout<<res;
    for(int i=kcount;i<n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        calc();
    }
    return 0;
}