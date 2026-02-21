#include<iostream>
using namespace std;
int main(){
    int n; int temp;int largest;
    cout<<"enter the number of element in array ";
    cin>>n;
    int arr[n];
    for (int i =0; i <n;i++){
        cin>>temp;
        arr[i]=temp;
    }
    largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"the largest element in the array is "<<largest;
}