#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int l,ca=0,cb=0;
	cin>>l;
	string s;
	cin>>s;
	for(int i=0;i<=l;i++){
		if(s[i]=='a'){
		ca++;}
	}
	for(int i=0;i<=l;i++){
		if(s[i]=='b'){
		cb++;}
	}
	if(ca>cb)
	cout<<cb;
	else
	cout<<ca;
	
	return 0;
}