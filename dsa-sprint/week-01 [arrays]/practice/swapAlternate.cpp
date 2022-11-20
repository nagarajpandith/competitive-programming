// My Approach 
#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n){
	int first = 0;
	int second = 1;
	while(second<n-1){
		swap(arr[first], arr[second]);
		first+=2;
		second+=2;
	}
}

int main(){
	int size, arr[100];
	cin>>size;
	for (int i=0;i<size;i++)
		cin>>arr[i];
	swapAlternate(arr, size);
	for (int i=0;i<size;i++)
		cout<<arr[i]<<" ";
}

// Babbar's approach
// #include<iostream>
// using namespace std;

// void printArray(int arr[], int n) {

//     for(int i = 0; i<n; i++ ) {
//         cout<< arr[i] <<" ";
//     }cout<<endl;

// }

// void swapAlternate(int arr[], int size) {

//     for(int i = 0; i<size; i+=2 ) {
//         if(i+1 < size) {
//             swap(arr[i], arr[i+1]);
//         }
//     }

// }

// int main() {

//     int even[8] = {5,2,9,4,7,6,1,0};
//     int odd[5] = {11, 33, 9, 76, 43};

//     swapAlternate(even, 8);
//     printArray(even, 8);

//     cout << endl;

//     swapAlternate(odd, 5);
//     printArray(odd, 5);

//     return 0;
// }