// input output


// #include <iostream>
// #include<bits/stdc++.h> //include all the library
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     cout<<"hello world"<<endl;
//     cout<<x <<endl;
//     cout<<"value of x is "<<x ;
//     return 0;
// }




//data types

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x =10;
//     float y=10.5;
//     double z=10.8;
//     //int float double
//     string a="Hello";  //any no of character before space 

//     string s ;
//     getline(cin , s);// this will take input whole not just before space.. before every think till enter(next line)
//     cout<<s;
//     char ch = 'h';
// }




//if else statement

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cin >> age ;
    
//     if(age>=18){
//         cout<<"the age of the person is above 18 ie adult";
//     }
//     else{
//         cout<<"the age of the person is below 18";
//     }
//     //else if  condition after that will not be executed after success .. 
// }



//switch statement

// #include<iostream>
// using namespace std;

// int main(){
//     int day;
//     cout<<"enter the day";
//     cin >> day;
//     switch(day){
//         case 1 :
//             cout<<"today is monday";
//             break;
//         case 2 :
//             cout<<"today is tuesday";
//             break;
//         case 3 : 
//             cout<<"today is wednesday";
//             break;
//         case 4 :
//             cout<<"today is thursday";
//             break;
//         case 5:
//             cout<<"today is friday";
//             break;
//         case 6:
//             cout<<"today is saturday";
//             break;
//         case 7:
//             cout<<"today is sunday";
//             break;
//         default:
//             cout<<"enter the correct number";
        
        

//     }
// }





//array

#include<bits/stdc++.h>
using namespace std;

int main(){
    //1D array
    // int arr[5]={10,23,23,22,12};
    // cout<<arr[4];
    // arr[3]=16;
    // for (int i=0;i<=5;i++){
    //     cout<<arr[i]<<endl;
    // }

    //2D array
    int arr[3][5]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
    for (int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<endl;
        }
    }
}