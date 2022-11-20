#include<bits/stdc++.h>
using namespace std;

bool isPresent (int arr[], int size, int key){
	for (int i=0;i<size;i++)
		if (arr[i]==key)
			return true;
	return false;
}

int main(){
	int arr[5], size, key;
	cin>>size;
	for (int i=0;i<size;i++)
		cin>>arr[i];
	cin>>key;
	if (isPresent(arr, size, key))
		cout<<"Yes";
	else
		cout<<"No";
}