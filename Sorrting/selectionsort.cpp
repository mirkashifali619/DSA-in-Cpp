#include<iostream>
using namespace std;
void sortedarray(int n , int arr[]){
    for(int i = 0 ; i<= n-2 ; i++){
        int min_index = i;
        for(int j = i ; j <=n-1 ; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
void printarray(int n , int arr[]){
    cout<<"Sorted Array:";
    for(int i = 0 ; i< n ; i++){
        cout<< arr[i] << " ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array:";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    sortedarray(n,arr);
    printarray(n,arr);
}