#include<iostream>
#include<vector>
using namespace std; 
class heap{
    public:
    int arr[100];
    int size; 
    heap(){
        arr[0] = -1; 
        size = 0;
    }
    void insert(int val){
        size = size + 1 ;
        int index = size; 
        // inserting the value 
        arr[index] = val; 
        while(index>1){ 
            if(arr[index/2]<arr[index]){
                swap(arr[index/2],arr[index]);
            }
            else{
                return;
            }
        }
    }
    void print_heap(){
        for(int i = 1 ; i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void delete_heap(){
        if(size==0){
            cout<<"Nothing to delete";
        }
        // 1st step - swap last node with root node
        arr[1] = arr[size];
        //2nd step - delete last node from last 
        size--;
        //3rd step- make the last node at right position 
        int i = 1;
        while(i<size){
            int left_index = 2*i;
            int right_index = 2*i+1; 
            if(left_index<=size && arr[i]<arr[left_index]){
                swap(arr[left_index],arr[i]); 
                i = right_index;
            }
            else if(right_index<=size && arr[i]<arr[right_index]){
                swap(arr[i],arr[right_index]);
                i = left_index;
            }
            else{
                return;
            }
        }
    }
};
int main(){
    heap h; 
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout<<"Before Deletetion:";
    h.print_heap();
    cout<<"After Deletion:";
    h.delete_heap();
    h.print_heap();
}
