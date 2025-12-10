// E
// DE 
// CDE 
// BCDE
// ABCDE


#include<iostream>
using namespace std;
int main(){
    string alpha="ABCDE";
    for(int i =4;i>=0;i--){
        for(int j=0;j<=4;j++){
            if(j<=(4-i)){
                cout<<alpha[i+j];
            }
        }
        cout<<endl;
    }
}

