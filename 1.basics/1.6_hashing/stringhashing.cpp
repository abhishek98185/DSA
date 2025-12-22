//hashing a string

//1. only lowercase alphabets

// #include<iostream>
// using namespace std;
// int main(){
//     string s1="abhishek";
//     string s="abcdefghijklmnopqrstuvwxyz";
//     int hash[26]={0};
//     for (int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }

//     for(int i=0;i<26;i++){
//         cout<<hash[i]<<" ";
//     }
// }


//all type of character

#include<iostream>
using namespace std;
int main(){
    string s="Abhishek.rameshrpvvsector11@gmail.com";
    int hash[256]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for(int i=0;i<256;i++){
        cout<<hash[i]<<" ";
    }
}