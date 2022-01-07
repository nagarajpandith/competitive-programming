#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    string txtip, args;
    int op;
    stack<string> history;
    cin >> op;
    while (cin >> op) {
        switch (op) {
            case 1: 
                cin >> args;
                history.push(txtip);
                txtip.append(args);
                break;
            case 2: 
                cin >> op;
                history.push(txtip);
                txtip.erase(txtip.length() - op);
                break;
            case 3: 
                cin >> op;
                cout << txtip[op - 1] << '\n';
                break;
            case 4: 
                txtip = move(history.top());
                history.pop();
                break;
        }        
    }
    return 0;
}