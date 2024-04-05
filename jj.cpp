#include<iostream>
using namespace std;
void get(int arr[],int m){
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
}
void display(int arr[],int m){
    for(int i=0;i<m;i++){
        cout<<arr[i];
    }
}
void insert(int arr[],int m,int num){
	for(int i= 0 ;i <= m ;i++){
		arr[m]= num;
	}
} 


int main(){
    int m;
    cin>>m;
    cout<<m;
    int arr[m];
    get(arr,m);
    display(arr,m);
    
}
