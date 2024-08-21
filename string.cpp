#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int c=0;
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        char str1=str[i];
        if(str1=='a' || str1=='A' || str1=='e' || str1=='E' || str1=='i' || str1=='I' || str1=='o' || str1=='O' || str1=='u' || str1=='U'){
            c++;
        }
    }
    cout<<"Number of vowels: "<<c;
    return 0;
}