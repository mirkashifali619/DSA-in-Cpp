#include<iostream>
using namespace std;
void bubblesort(int n , int arr[]){
    int i , j ;
    //int count = n - 1;
    //while(count==0){
        for(int i = n-1 ; i>=1 ; i--){
            for(int j = 0 ; j<=i-1 ; j++ ){
                if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    //count--;
   //}
}
void printarray(int n , int arr[]){
    cout<<"Sorted Array:";
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array:";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    bubblesort(n,arr);
    printarray(n,arr);
}
