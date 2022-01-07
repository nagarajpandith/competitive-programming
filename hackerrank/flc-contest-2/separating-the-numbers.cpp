//Bruteforcing seemed the only way at that time, but other approaches are good as well
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t, a;
    cin.ignore(256, '\n');
    while(cin >> s){
        for(int l = 1; l <= s.size()/2 && s != t; l++){
            a = t = s.substr(0, l);
            for(int i = 1; t.size() < s.size(); i++)
                t += to_string(stoll(a) + i);
        }
        cout << (s == t ? "YES " + a : "NO") << endl;
    }
    return 0;
}