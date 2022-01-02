#include<iostream>
using namespace std;
int main(){
    int count=0, n; cin>>n;
    while(n!=0) {
        count++;
        n=n/10;
    }
    if(count<4) cout<<count;
    else cout<<"More than 3 digits";
     return 0;
}