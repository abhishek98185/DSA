// ABCDE
// ABCD
// ABC 
// AB 
// A

#include<iostream>
using namespace std;
int main(){
    string alpha="ABCDE";
    for(int i =0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(i+j<=4){
                cout<<alpha[j];
            }
        }
        cout<<endl;
    }
}