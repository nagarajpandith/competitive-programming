#include <iostream>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	    int num;
	    cin>>num;
	    cout << num << " " ;
	    for(int i=1; i<=num-1; i++){
	        cout << i << " " ;
	    }
	    cout << endl ;
	} 
		return 0;
}
