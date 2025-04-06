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
};
int main(){
    heap h; 
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print_heap();
}
