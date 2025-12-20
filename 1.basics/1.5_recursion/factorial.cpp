// find the factorial of n number


// parameterised way


// #include<iostream>
// using namespace std;
// void factorial(int i , int fact){
//     if(i==1){
//         cout<<fact<<endl;
//         return;
//     }
//     factorial(i-1,fact*i);
// }
// int main(){
//     factorial(5,1);
//     return 0;
// }


//functional way
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int fact=factorial(5);
    cout<<fact;
    return 0;
}