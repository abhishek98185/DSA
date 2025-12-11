#include<bits/stdc++.h>
using namespace std;
void explainvector(){

    //declaration of vector 

    vector<int> v;
    v.push_back(1); //add 1 to vector
    v.emplace_back(2);  //add 2 to vector



    //declaration of vector with pairs

    vector<pair<int,int>> p;
    p.push_back({1,2});  //add {1,2} into the vector
    p.emplace_back(1,2);  //add {1,2} into the vector

    //vector containing fixed number of element with a contant

    vector<int> f(5,100);  //create a vector of type{100,100,100,100,100}
    f.push_back(10);  //vector explands to {100,100,100,100,100,10}

    //vector declaration

    vector<int> g(5); //create a vector of size 5 but contain 5 zeros or garbage values

    //coping of one vector in another

    vector<int> v1(5,100); //v1={100,100,100,100,100}
    vector<int> v2(v1); //v2 is a copy of v1



}



int main(){

    return 0;
}