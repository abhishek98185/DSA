// in selection sort we find the minimum and swap 

#include<iostream>
using namespace std;

void selection_sort(int arr[],int n ){
    for(int i=0;i<n-1;i++){
        int min=i;
        for (int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        // swap(arr[min],arr[i]);
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"enter the n elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarray(arr,n);
    selection_sort(arr,n);
    printarray(arr,n);


}