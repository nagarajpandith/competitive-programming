// My Approach
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[100], size, rev[100];
	cin>>size;
	for (int i=0;i<size;i++){
		cin>>arr[i];
	}
	int j=0;
	while (j<size){
	for (int i=size-1;i>=0;i--){
		rev[j]=arr[i];
		j++;
	}
}
	for (int i=0;i<size;i++){
		cout<<rev[i]<<" ";
	}

}

// Babbar's approach
//  #include<bits/stdc++.h>
// using namespace std;

// void reverseArray(int arr[], int n){
// 	int start = 0;
// 	int end = n-1;
// 	while (start<=end){
// 	swap(arr[start], arr[end]);
// 	start++;
// 	end--;
// }
// }

// int main(){
// 	int arr[100], size;
// 	cin>>size;
// 	for (int i=0;i<size;i++){
// 		cin>>arr[i];
// 	}
// 	reverseArray(arr, size);
// 	for (int i=0;i<size;i++){
// 		cout<<arr[i]<<" ";
// 	}
// } 