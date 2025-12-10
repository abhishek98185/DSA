// 12345
// 1234
// 123
// 12
// 1


#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=0;i--){
        for(int j=1;j<=5;j++){
            if(i>=j){
                cout<<j;
            }
        }
        cout<<endl;
    }
}