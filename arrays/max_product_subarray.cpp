#include<iostream>
#include<vector>
using namespace std;
int max_product_subb(vector<int>&nums){
    int max_product = nums[0] , min_product = nums[0]; 
    int res = 0 ; 
    for(int i=1 ;i<nums.size();i++){
        if(nums[i]<0){
            swap(max_product,min_product);
        }
        max_product = max(nums[i],max_product*nums[i]); 
        min_product = min(nums[i],min_product*nums[i]); 

        res = max(res,max_product);
    }
    return res;
}
int main(){
    vector<int>nums{2,3,-2,4};
    int result = max_product_subb(nums);
    cout<<"The maximum Product Of Subarray:"<<result;
}