//void function :- does not return any thing
//return function :- return specific value
//parameterised
//non-paramerterised




//void function  not parameterised

// #include<iostream>
// using namespace std;

// void printname(){
//         cout<<"Abhishek Singh";
//     }

// int main(){
//     printname();
// }




//void function parameterised

// #include<iostream>
// using namespace std;
// void printname(string name){
//     cout<<name;
// }

// int main(){
//     string name;
//     cout<<"enter the name ";
//     cin>>name;
//     printname(name);
// }


//take two number and print sum

// #include<iostream>
// using namespace std;
// void sum(int num1,int num2){
//     int sum=num1+num2;
//     cout<<"the sum of two number is "<< sum;
// }

// int main(){
//     int num1,num2;
//     cout<<"print 1st number ";
//     cin>>num1;
//     cout<<endl<<"enter the 2nd number ";
//     cin>>num2;
//     sum(num1,num2);

//     return 0;

// }



// return function without paramenter

// #include<iostream>
// using namespace std;

// string printname(){
//     return "abhishek";
// }
// int main(){
//     string name = printname();
//     cout<<name;
//     return 0;
// }


//return function with parameterised

// #include<iostream>
// using namespace std;

// int sum(int num1,int num2){
//     return num1+num2;
// }
// int main(){

//     int num1,num2;
//     cin>>num1;
//     cin>>num2;
//     int add=sum(num1,num2);
//     cout<<add;
//     return 0;
// }



// built in function

// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     // int minimum=min(num1,num2);     //minimum of number
//     // cout<<minimum;

//     int maximum=max(num1,num2);        //maximum of number
//     cout<<maximum;
   
// }

//call by value   real value will not change copy value go
//call by pointer real value change




//call by pointer


// #include<iostream>
// using namespace std;
// void change(int &num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
    
// }
// int main(){
//     int num;
//     cin>>num;
//     change(num);
//     cout<<num; //print 15


// }


//array always pass value by refrencez

//call  by value
#include<iostream>
using namespace std;
void change(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    
}
int main(){
    int num;
    cin>>num;
    change(num);
    cout<<num;   //print 10
 

}