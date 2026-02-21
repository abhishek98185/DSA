#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n ; int largest ; int slargest; int temp;
    cout<<"enter the number of elements in array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
    }
    

    // brute force (sort and return second largest check if n-2 is not same as largest)


    //better
    
    // largest=arr[0];
    // slargest=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>largest){
    //         largest=arr[i];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]<largest && arr[i]>slargest){
    //         slargest=arr[i];
    //     }
    // }
    // cout<<"second largest element is "<<slargest;

    // optimal


    largest=arr[0];
    slargest= INT_MIN;
    for (int i =0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else{
            if(arr[i]>slargest && arr[i]!=largest){
                slargest=arr[i];
            }
        }
    }
    cout<<"second largest element is "<<slargest;

}