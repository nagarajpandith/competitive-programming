#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	   int xxk,yyk,xx1,yy1,xx2,yy2; 
	   cin>>xxk>>yyk>>xx1>>yy1>>xx2>>yy2;
	   string result="NO";
	   if(!(xxk==1||xxk==8||yyk==1||yyk==8)) {
	       result="NO";
	   }
	   else {
	       if(xxk==1) {
	           if((xx1==2||xx2==2)&&yy1!=yy2){
	               if(abs(yy1-yyk)>1&&abs(yy2-yyk)>1){
	                   result="YES";
	               }
	           }
	       }
	   
	   else if(xxk==8) {
	       if((xx1==7||xx2==7)&&yy1!=yy2){
	           if(abs(yy1-yyk)>1&&abs(yy2-yyk)>1) {
	               result="YES";
	           }
	       }
	   }
	   if(yyk==1){
	       if((yy1==2||yy2==2)&&xx1!=xx2) {
	           if(abs(xx1-xxk)>1&&abs(xx2-xxk)>1){
	               result="YES";
	           }
	       }
	   }
	   else if(yyk==8){
	       if((yy1==7||yy2==7)&&xx1!=xx2)
	       if(abs(xx1-xxk)>1&&abs(xx2-xxk)>1){
	           result="YES";
	       }
	   }
	}
	cout<<result<<endl;
}
return 0;
}