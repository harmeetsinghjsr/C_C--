#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp ;
	temp =a;
	a=b;
	b= temp;
}
int main(){
	int a;
	cin >> a;
	int arr[a];
	for(int i = 0 ; i< a;i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i< a;i++){
		for(int j = 0 ; j < a-i-1 ;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout << arr[i];
}
