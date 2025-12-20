// 1. print name N times by recursion

// #include<iostream>
// using namespace std;

// void rec(int n){
//     if(n<1){
//         return;
//     }
//     cout<<"Abhishek \n";
//     rec(n-1);
// }
// int main(){
//     rec(5);
// }




// 2. print 1 to N using recursion

// #include<iostream>
// using namespace std;
// void rec(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<endl;
//     rec(i+1,n);
// }
// int main(){
//     rec(1,10);
//     return 0;
// }


// 3. print n to 1 using recursion

// #include <iostream>
// using namespace std;
// void rec(int i ){
//     if(i<1){
//         return;
//     }
//     cout<<i<<endl;
//     rec(i-1);

// }
// int main(){
//     rec(5);
// }


// 4. print 1 to n using backtracking (no i+1)

// #include<iostream>
// using namespace std;
// void rec(int i , int n ){
//     if(i<1){
//         return;
//     }
//     rec(i-1,n);
//     cout<<i<<endl;
// }
// int main(){
//     rec(5,5);
//     return 0;
// }

// 5.print n to 1 using backtracking (n0 i-1)

#include<iostream>
using namespace std;
void rec(int i , int n ){
    if(i>n){
        return;
    }
    rec(i+1,n);
    cout<<i<<endl;
}
int main(){
    rec(1,5);
    return 0;
}