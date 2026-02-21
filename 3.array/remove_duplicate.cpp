#include<iostream>
#include<vector>
#include<set>
using namespace std;

int brute_removeduplicate(vector<int> &nums){
    int n=nums.size();
    set<int> st;
    for (int i =0;i<n;i++){
        st.insert(nums[i]);
    }
    int index=0;
    for(auto it=st.begin();it !=st.end();it++){
        nums[index]=*it;
        index++;
    }

    return index;
}



int optimale_removeduplicate(vector<int> &nums){
    int n=nums.size();
    int i =0;
    for(int j =1;j<n;j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int> nums;
    int n ;
    cout<<"enter the number of element you want to insert: ";
    cin>>n;

    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    // cout<<"number of unique element using brute force "<<brute_removeduplicate(nums);
    cout<<"number of unique element using optimal solution " << optimale_removeduplicate(nums);
}