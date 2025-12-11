//    A
//   ABA
//  ABCBA
// ABCDCBA

#include<iostream>
using namespace std;
int main(){
    string alpha="ABCDE";
    for(int i=0;i<=3;i++){
        for(int j=0;j<=6;j++){
            if(j<=2){
                if(i+j>=3){
                    cout<<alpha[(i+j-3)];
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j-3<=i){
                    cout<<alpha[i-(j-3)];
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}