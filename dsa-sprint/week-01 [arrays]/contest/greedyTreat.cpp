// Score: 50/50
#include<iostream>
using namespace std;

int main ()
{
    // this problem is transposing the 2d matix and then rotating it
    int Array[100][100], m, n, i, j;
    cin >> m;
    n = m;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> Array[i][j];
    for(int r = 0; r < m; r++) {
      for(int c = r; c < n; c++) {  
        swap(Array[r][c], Array[c][r]);
      }
    }
    for(int r = 0; r < n; r++) {
        for(int c =0; c < n/2; c++) {
          swap(Array[r][c], Array[r][n-c-1]);
        }
    }
    for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
               cout<<Array[i][j]<<" ";
            
        }cout<< "\n";
    }
    return 0;
}