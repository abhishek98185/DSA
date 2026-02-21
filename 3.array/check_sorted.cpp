#include<iostream>
#include<vector>
using namespace std;

int issorted(vector<int> a, int n){
    for(int i =1;i<n;i++){
        if(a[i]<a[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> a;
    int n; 
    cout<<"enter the size of vector";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int if_sorted=issorted(a,n);
    cout<<if_sorted;
}