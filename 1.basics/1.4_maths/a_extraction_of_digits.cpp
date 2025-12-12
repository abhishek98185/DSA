#include<iostream>
using namespace std;

void extractdigit(int N){
    while(N>0){
        int last_digit=N%10;
        cout<<last_digit<<endl;
        N=N/10;
    }
}

int main(){
    int N;
    cin>>N;
    extractdigit(N);
}