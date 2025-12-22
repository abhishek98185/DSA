// method 1 two pointer 

// #include<iostream>
// using namespace std;
// void reverse(int i,int r, int arr[]){
//     if(i>=r){
//         for(int j=0;j<10;j++){
//             cout<<arr[j]<<" ";
//         }
//         return;
//     }
//     swap(arr[i],arr[r]);
//     reverse(i+1,r-1,arr);
// }

// int main(){
//     int arr[10]={0,1,2,3,4,5,6,7,8,9};
//     int n =10;
//     for(int i =0;i<=9;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     reverse(0,9,arr);
// }


// method 2 using one pointer i and other as n-i-1

#include<iostream>
using namespace std;
void reverse(int i , int n, int arr[]){
    if(i>=n/2){
        for(int j =0;j<=9;j++){
            cout<<arr[j]<<" ";
        }
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,n,arr);
}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int n=10;
    for(int i =0; i<=9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(0,n,arr);
}