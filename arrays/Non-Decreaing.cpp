#include<iostream>
#include<vector>
using namespace std;
bool is_decreasing(vector<int>& nums){
    bool changed = false;
    for(int i =0;i<nums.size()-1;i++){
        if(nums[i]<=nums[i+1]){
            continue;
        }
        if(changed){
            return false;
        }
        if(i==0 || nums[i+1]>=nums[i-1]){
            nums[i] = nums[i+1];
        }
        else{
            nums[i+1] = nums[i];
        }
        changed = true;
    }
    return  true;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Read the size of the vector

    vector<int> nums(n); // Create a vector of size n

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i]; // Read each element
    }
    bool result = is_decreasing(nums);
    if(result){
        cout<<"Nums is a Non-Decreasing Array!!";
    }
    else{
        cout<<"Nums is Not a  Non-Decreasing Array!!";
    }
}