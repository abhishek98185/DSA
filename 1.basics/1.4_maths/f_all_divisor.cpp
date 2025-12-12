#include<iostream>
using namespace std;
void alldivisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
            if(n/i!=i){
                cout<<n/i<<endl;
            }
        }
    }
}
int main(){
    int n ;
    cin>>n;
    alldivisor(n);
}