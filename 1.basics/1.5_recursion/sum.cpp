// sum of n natural number 

//parameterised form

// #include<iostream>
// using namespace std;
// void summition(int i , int sum){
//     if(i==0){
//         cout<<sum;
//         return;
//     }
//     summition(i-1,sum+i);
// }
// int main(){
//     summition(4,0);
//     return 0;
// }


//functional method

#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int summition=sum(5);
    cout<<summition;
    return 0;
}