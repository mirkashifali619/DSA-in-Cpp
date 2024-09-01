#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node * next;
    Node(int data){
        value = data;
        next = nullptr;
    }
};
Node* convert(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int main(){
    vector <int> arr = {12,5,6,7};
    Node* head = convert(arr);
    Node* temp = head;
    while(temp){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    
}
