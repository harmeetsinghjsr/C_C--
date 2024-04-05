#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end()); 

    for(int i=0;i<n;i++){
        if(v[i] == 9){
            v[i]=7;
        }
        cout << v[i] << " ";
    }   


}