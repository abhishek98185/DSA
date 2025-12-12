#include<iostream>
using namespace std;
int reverse_number(int n){
    int reverse=0;
    while(n>0){
        int last_digit=n%10;
        reverse=(reverse*10)+last_digit;
        n=n/10;
    }
    return reverse;
}
int main(){
    int n ;
    cin>>n;
    int rev=reverse_number(n);
    cout<<rev;
    return 0;
}