#include<iostream>
using namespace std;
int countdigit(int n){
    int count=0;
    while(n>0){
        count+=1;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int no_of_digit=countdigit(n);
    cout<<no_of_digit;
    return 0;
}



//method 2


// #include<bits/stdc++.h>
// using namespace std;
// int countdigit(int n ){
//     int count=((log10(n))+1)/1;
//     return count;
// }
// int main(){

    
//     int n;
//     cin>>n;
//     int count=(int) (log10(n)+1);
//     int no_of_digit=countdigit(n);
//     cout<<"count= "<<count<<endl;
//     cout<<no_of_digit;
// }

