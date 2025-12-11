//libraries


// #include<bits/stdc++.h>    //include all library
// #include<math.h>     //include maths library
// using namespace std;
// int main(){
// }



//pairs



// 1. using pairs and accessing values 

// #include<iostream>
// using namespace std;

// void explainpairs(int a , int b){
//     pair<int,int> p = {a,b};
//     cout<<p.first<<endl<<p.second;
// }

// int main(){
//     explainpairs(3,4);
//     return 0;
// }


//using pairs to store 3 values and accessing them 

// #include<iostream>
// using namespace std;
// void explainpairs(int a , int b ,int c){
//     pair<int,pair<int,int>> p ={a,{b,c}};
//     cout<<"first value is "<<p.first<<endl;
//     cout<<"second value is "<<p.second.first<<endl;
//     cout<<"third value is "<<p.second.second<<endl;
// }
// int main(){
//     explainpairs(1,2,3);
//     return 0 ;
// }



//using arrays to store pair

#include<iostream>
using namespace std;
void explainpair(){
    pair<int,int> arr[5]={{1,2},{3,4},{5,6},{7,8},{9,10}};
    for(int i =0;i<=4;i++){
        cout<<arr[i].first<<endl;
        cout<<arr[i].second<<endl;
        cout<<endl;
    }
}
int main(){
    explainpair();
    return 0;
}