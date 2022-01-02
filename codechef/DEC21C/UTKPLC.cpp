#include <iostream>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	   string firstno,secondno,thirdno,xx,yy;
	   cin>>firstno>>secondno>>thirdno>>xx>>yy;
	   if(xx==firstno||yy==firstno) {
	   cout<<firstno<<endl;
	   }
	   else {
	   cout<<secondno<<endl;
	   }
	}
	return 0;
}
