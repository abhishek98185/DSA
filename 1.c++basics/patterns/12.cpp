// 1      1
// 12    21
// 123  321
// 12344321


#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=8;j++){
            if(j<=4){
                if(j<=i){
                    cout<<j;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(i+j>=9){
                    cout<<9-j;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}