#include<bits/stdc++.h>
using namespace std;
int sub_array(vector<int>&nums){
    int curr_sum = 0 , max_sum = INT_MIN; 
    for(int i: nums){
        curr_sum += i;
        max_sum = max(max_sum,curr_sum);
        if(curr_sum<0) curr_sum = 0;
    }
    return max_sum;
}
int main(){
    vector<int>nums{-1,2,3,4,5,6};
    int result = sub_array(nums);
    cout<<"The maximum Sum of The Array is:"<<result;
}