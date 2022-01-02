#include <iostream>
using namespace std;
int main() {
	int n,even=0,odd=0,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	    cin>>a[i];
	for(i=0;i<n;i++) {
	    if(a[i]%2==0) even++;
	    else odd++;
	}
	if(even>odd)
	    cout<<"READY FOR BATTLE"<<endl;
	else
	    cout<<"NOT READY"<<endl;
	return 0;
}
