#include <iostream>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	    int xm,ym,pw,qw;
        cin>>xm>>ym>>pw>>qw;
        xm+=10*pw;
        ym+=10*qw;
        string ans="";
        if(xm>ym){
            ans="Chefina";
        }
        else if(xm==ym){
            ans="Draw";
        }
        else{
            ans="Chef";
        }
        cout<<ans<<endl;
	}
	return 0;
}
