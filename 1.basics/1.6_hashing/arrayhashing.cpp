//hashing for array given all elements are in 0-12 range

#include<iostream>
using namespace std;
int main(){
    int hash[13]={0};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    
    for(int i =0;i<13;i++){
        cout<<hash[i]<<" ";
    }
}