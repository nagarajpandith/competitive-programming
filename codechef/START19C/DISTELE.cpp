#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--) {
	    int n;
        cin>>n;
        vector<int>arr(n);
        for(int &i:arr) cin>>i;
        map<int,int>frequency;
        long long int res=1;
        int mod7=1e9+7;
        for(int i:arr){
            frequency[i]++;
        }
        for(auto pii:frequency) {
            int f=pii.second;
            res*=(f+1);
            res%=mod7;
        }
        res--;
        cout<<res<<endl;
	}
	return 0;
}
