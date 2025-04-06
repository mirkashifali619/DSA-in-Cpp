#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max-heap 
    priority_queue<int>max_heap;
    max_heap.push(1);
    max_heap.push(5);
    max_heap.push(2);
    max_heap.push(3);
    cout<<"Element present at Top:"<<max_heap.top()<<endl;
    // deleting element 
    max_heap.pop();
    cout<<"Element present at Top after popping:"<<max_heap.top()<<endl;
    cout<<endl;
    // min_heap 
    priority_queue<int , vector<int>,greater<int>>min_heap; 
    min_heap.push(3);
    min_heap.push(5);
    min_heap.push(7);
    min_heap.push(2);
    min_heap.push(1); 
    cout<<"Element present at Top:"<<min_heap.top()<<endl;
    min_heap.pop();
    cout<<"Element present at Top after popping:"<<min_heap.top()<<endl;
}