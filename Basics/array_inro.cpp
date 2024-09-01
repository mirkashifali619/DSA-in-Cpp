#include<iostream>
using namespace std;
void reverse_array(int arr[],int n ){
    int start  = 0 , end = n -1 ;
    while(start<end){
        swap(arr[start],arr[end]); 
        start++;
        end--;
    }
}
void print_array(int arr[] ,int  n){
    for(int i=0 ;i <n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {11,22,33,44,54,64} ;
    int n =  sizeof(arr) / sizeof(arr[0]);
    //for(int i=n-1 ; i>=0 ; i--){
    //    cout<<i<<"-"<<arr[i];
      //  cout<<endl;
    //}
    //cout<<n; 
    cout<<"Original Array:";
    print_array(arr,n);
    reverse_array(arr,n);
    cout<<"Reverse Array:";
    print_array(arr,n);

}