#include<iostream>
using namespace std;
void reversearray_even(int arr[] , int n){
    int start = 0 , end = n - 1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout << arr[i]<<" " ;
    }
    cout<<endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[6] ={16,4,8,9,10,1};
    reversearray_even(arr,5);
    reversearray_even(arr1,6);
    printarray(arr1,6);
    printarray(arr,5);
}