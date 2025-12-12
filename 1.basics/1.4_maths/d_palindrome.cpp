#include<iostream>
using namespace std;
bool check_palindrome(int n ){
    int duplicate = n;
    int reverse=0;
    while(n>0){
        int last_digit=n%10;
        reverse=(reverse*10)+last_digit;
        n=n/10;
    }
    
    return duplicate==reverse;

}

int main(){
    int n ;
    cin>>n;
    bool palindrome=check_palindrome(n);
    cout<<palindrome;
    return 0;
}
//greater space complexity because we have to include a new variable duplicate(last_digit, n , reverse preexisting)





//method 2 better space complexity

// #include<iostream>
// using namespace std;
// int reverse_number(int n){
//     int reverse=0;
//     while(n>0){
//         int last_digit=n%10;
//         reverse=(reverse*10)+last_digit;
//         n/=10;
//     }
//     return reverse;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(n==reverse_number(n)){
//         cout<<"the number is palindrome";
//     }
//     else{
//         cout<<"the number is not palindrome";
//     }

//     return 0;
// }//lesser space complexity not a duplicate variable the value of n changes inside function so we need to create a new variable if we want output within function
