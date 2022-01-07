#include <iostream>
using namespace std;
int main()
{
    for(int i = 5; i >= 1; --i)
    {
        for(int space = 0; space < 5-i; ++space)
            cout << "  ";
        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";
        for(int j = 0; j < i-1; ++j)
            cout << "* ";
        cout << endl;
    }
    return 0;
}