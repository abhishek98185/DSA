//armstrong number is a number which is equal to the sum of its digit raised to the power no of digit example 153

#include<iostream>
#include<math.h>
using namespace std;
bool check_armstrong(int n,int count){
    int duplicate=n;
    int sum=0;
    while(n>0){
        
        int last_digit=n%10;
        sum+=(int)(pow(last_digit,count));
        n=n/10;
    }
    return duplicate==sum;
    
}
int main(){
    int n;
    
    cin>>n;
    int count=(int)(log10(n)+1);
    int armstrong=check_armstrong(n,count);
    cout<<armstrong;
    
}