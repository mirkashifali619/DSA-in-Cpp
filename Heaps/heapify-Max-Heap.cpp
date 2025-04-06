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
int main(){
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    // taking all the elements except the leaf nodes 
    for(int i = n/2 ; i>0 ; i--){
        heapify(arr,n,i);
    }
    // printing the heap 
    for(int i= 1 ; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 
    int k = 3 ;
    // we need to return the 3rd largest element 
    cout<<"Third Largest Element:"<<arr[n-k+1]<<endl;
}