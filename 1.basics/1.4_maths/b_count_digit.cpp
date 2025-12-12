#include<iostream>
using namespace std;
int count_digit(int n){
    int count=0;
    while(n>0){
        count++;        //time complexity == O(log n)
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int digit=count_digit(n);
    cout<<digit;
    return 0;
}


//method 2

// #include<iostream>
// #include<math.h>
// using namespace std;
// int count_digit(int n ){
//     int count=(int)(log10(n)+1);      //time complexity O(1)
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     int count=count_digit(n);
//     cout<<count;
//     return 0;

// }
