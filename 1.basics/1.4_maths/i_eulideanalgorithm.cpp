#include<iostream>
using namespace std;
int eulideanalgo(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    else{
        return n1;
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd=eulideanalgo(n1,n2);
    cout<<gcd;
}