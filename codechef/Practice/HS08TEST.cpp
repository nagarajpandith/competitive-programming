#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int withdraw; double balance;
    cin >> withdraw; cin >> balance;
    if(withdraw + 0.5 <= balance && withdraw%5==0) {
        balance = balance - withdraw - 0.5;
    }
    cout <<fixed << setprecision(2) << balance;
    return 0;
}   