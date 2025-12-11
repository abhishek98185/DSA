// A
// BB
// CCC 
// DDDD
// EEEEE

#include<iostream>
using namespace std;
int main(){
    string alpha="ABCDE";
    for(int i =0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(j<=i){
                cout<<alpha[i];
            }
        }
        cout<<endl;
    }
}