// A
// AB 
// ABC 
// ABCD 
// ABCDE

#include<iostream>
using namespace std;
int main(){
    string alpha="ABCDE";
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(j<=i){
                cout<<alpha[j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}