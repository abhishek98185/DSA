// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=10;j++){
            if(i<=5){
                if(j<=5){
                    if(j<=i){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if(i+j>=11){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
            else{
                if(j<=5){
                    if((i+j)<=10){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if(j<=i){
                        cout<<" ";
                    }
                    else{
                        cout<<"*";
                    }
                }
            }
        }
        cout<<endl;
    }

}