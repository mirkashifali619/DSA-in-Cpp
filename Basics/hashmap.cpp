#include<iostream>
#include <unordered_map>
using namespace std; 
int main(){
    unordered_map<string,int>cnt; 
    cnt["Apple"] = 10;
    cnt["orange"] = 20;
    cnt["mangoes"] = 30; 
    // iterating over key-value pairs 
    for(auto i:cnt){
        cout<<i.first<<"-"<<i.second<<endl;
    }
    return 0; 
    unordered_map<int,int>ans; 
    int arr[] = {1,1,2,4,2,5,6,7,7,10,1,3,2}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    
}