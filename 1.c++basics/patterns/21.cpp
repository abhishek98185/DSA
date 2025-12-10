// ****
// *  *
// *  *
// ****

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i<=2){
                if(j<=2){
                    if((i+j)<=3){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if((j-2)>=i){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
            else{
                if(j<=2){
                    if(j<=(i-2)){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if((i+j)>=7){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
}