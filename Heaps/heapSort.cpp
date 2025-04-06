// Following 1-Based Indexing
#include<iostream>
using namespace std;
void heapify(int arr[] , int n , int i){
    int largest = i;
    int left_index = 2*i;
    int right_index = 2*i+1;
    //comparing if our largest is smaller than either left_index and right_index 
    if(left_index<=n && arr[left_index]>arr[largest]){
        largest = left_index;
    }
    if(right_index<=n && arr[right_index]>arr[largest]){
        largest = right_index;
    }
    // if largest has been changed 
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heap_sort(int arr[] , int n){
    int size = n;
    while(size>1){ 
        // first step 
        swap(arr[size],arr[1]);
        size--;
        // second step 
        heapify(arr,size,1);
    }
}
int main(){
    int arr[6] = {-1,50,60,55,45,70};
    int n = 5;
    // taking all the elements except the leaf nodes 
    for(int i = n/2 ; i>0 ; i--){
        heapify(arr,n,i);
    }
    cout<<"Before Sorting:"<<endl;
    for(int i= 1 ; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // after sorting 
    heap_sort(arr,n);
    cout<<"After Sorting:"<<endl;
    for(int i= 1 ; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}