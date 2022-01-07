#include <iostream>
using namespace std;
int main() {
	int t, N, x, y;
	cin>>t;
	while(t--) {
	    cin>>N>>x>>y;
	    if((x+y)%2==0)
	    cout<<0<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
