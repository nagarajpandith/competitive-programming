#include <iostream>
#include <string>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	   int num,m;
	   cin>>num>>m;
	   string res="";
	   if(m==num) {
	       for(int i=0;i<num+1;i++){
	           res+="10";
	       }
	   }
	   else if(m>num) {
	       for(int i=0;i<num+1;i++){
	           res+="10";
	       }
	       for(int i=0;i<m-num-1;i++){
	           res+="110";
	       }
	       res+="1";
	   }
	   else {
	       for(int i=0;i<m;i++){
	           res+="01";
	       }
	       for(int i=0;i<num-m;i++){
	           res+="010";
	       }
	   }
	   cout<<res.size()<<endl;
	   cout<<res<<endl;
	}
	return 0;
}