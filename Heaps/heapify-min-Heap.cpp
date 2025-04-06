#include<iostream>
using namespace std;
void heapify(int arr[] , int n , int i){
    int smallest = i;
    int left_index = 2*i+1;
    int right_index = 2*i+2;
    //comparing if our largest is smaller than either left_index and right_index 
    if(left_index<n && arr[left_index]<arr[smallest]){
        smallest = left_index;
    }
    if(right_index<n && arr[right_index]<arr[smallest]){
        smallest = right_index;
    }
    // if largest has been changed 
    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
    }
}
int main(){
    int arr[7] = {5,9,1,8,10,6,4};
    int n = 7;
    // taking all the elements except the leaf nodes 
    for(int i = n/2-1 ; i>=0 ; i--){
        heapify(arr,n,i);
    }
    // printing the heap 
    for(int i= 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int k = 5; 
    cout<<"Third Smallest Element:"<<arr[k-1]<<endl;
}