#include <bits/stdc++.h>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	   int num;
	   cin>>num;
	   vector<int> a(num);
	   for(int&i : a)
	   cin>>i;
	   map<int, int> freq;
	   for(int i : a)
	    freq[i]++;
	    int maxfreq=-1;
	    for(auto pii:freq) {
	        maxfreq=max(maxfreq, pii.second);
	    }
	    int res=-10;
	    if (num==1||maxfreq==num) 
	    {res=0;} 
	    else if(maxfreq==1) 
	    {res=-1;}
	    else
	    {res=(num-maxfreq)+1;}
	    cout<<res<<endl;
	}
	return 0;
}