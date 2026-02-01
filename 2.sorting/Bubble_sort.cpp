#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n ;
    
    cout<< "enter the value of n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter all the elements of array "<<endl;
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    printarray(arr,n);
    bubble_sort(arr,n);
    printarray(arr,n);

}