#include <bits/stdc++.h>
using namespace std;
char mat(char a, char b){
    if(a==b) {return a;}
    else if(a=='R'&&b=='P'||a=='P'&&b=='R') {
        return 'P';
    }
    else if(a=='R'&&b=='S'||a=='S'&&b=='R') {
        return 'R';
    }
    else if(a=='P'&&b=='S'||a=='S'&&b=='P'){
        return 'S';
    }
}
int main() {
	int tc;
	cin>>tc;
	
	while(tc--) {
	   int n;
	   cin>>n;
	   string s;
	   cin>>s;
	   
	   vector<char> rdpa(n+1);
	   vector<char> pdpa(n+1);
	   vector<char> sdpa(n+1);
	   vector<char> result(n+1);
	   
	   result[n]=s[n-1];
	   
	   rdpa[n]=mat('R',s[n-1]);
	   pdpa[n]=mat('P',s[n-1]);
	   sdpa[n]=mat('S',s[n-1]);
	   for(int i=n-1;i>=1;i--) {
	       
	   char r_res=mat('R',s[i-1]);
	   if(r_res=='R'){
	       rdpa[i]=rdpa[i+1];
	   }
	   else if(r_res=='P') {
	       rdpa[i]=pdpa[i+1];
	   }
	   else if(r_res=='S') {
	       rdpa[i]=sdpa[i+1];
	   }
	   
	   char p_res=mat('P',s[i-1]);
	   if(p_res=='R'){
	       pdpa[i]=rdpa[i+1];
	   }
	   else if(p_res=='P') {
	       pdpa[i]=pdpa[i+1];
	   }
	   else if(p_res=='S') {
	       pdpa[i]=sdpa[i+1];
	   }
	   
	   char s_res=mat('S',s[i-1]);
	   if(s_res=='R'){
	       sdpa[i]=rdpa[i+1];
	   }
	   else if(s_res=='P') {
	       sdpa[i]=pdpa[i+1];
	   }
	   else if(s_res=='S') {
	       sdpa[i]=sdpa[i+1];
	   }
	   
	   if(s[i-1]=='R'){
	       result[i]=rdpa[i+1];
	   }
	   else if(s[i-1]=='P'){
	       result[i]=pdpa[i+1];
	   }
	   else if(s[i-1]=='S'){
	       result[i]=sdpa[i+1];
	   }
	   }
	   for(int i=1;i<=n;i++){
	       cout<<result[i];
	   }
	   cout<<endl;
	}
	return 0;
}
