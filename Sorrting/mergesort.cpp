#include<iostream>
#include<vector>
using namespace std;
int merge_sort(int arr[] , int low , int high , int mid , int n){
    vector<int> ans;
    int first_start = low; //start of the first sorted array
    int second_start = mid+1;// start of the second sorted array
    while(first_start<=mid && second_start<=high){
        if(arr[first_start]<arr[second_start]){
            ans.push_back(arr[first_start]);
            first_start++;
        }
        else{
            ans.push_back(arr[second_start]);
            second_start++;
        }
    }
    while(first_start<=mid){
        ans.push_back(arr[first_start]);
        first_start++;
    }
    while(second_start<=high){
        ans.push_back(arr[second_start]);
        first_start++;
    }
    for(int i = low ; i< high ; i++){
        arr[i] = ans[i - low];
    }
}
void printarray(int arr[] , int low , int high , int n){
    cout<<"Sorted Array:";
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
}
void divide(int arr[] , int low , int high , int n){
    if(low==high) return;
    int mid = (low+high)/2;
    divide(arr,low,mid,n);
    divide(arr,mid+1,high ,n);
    merge_sort(arr,low,high,mid ,n);
}
int main(){
    int n ; 
    cout<<"Enter Size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array:";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    divide(arr, 0 , n-1 , n);
    printarray(arr, 0 , n-1 , n);
}