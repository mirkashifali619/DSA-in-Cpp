#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node* next; // points to the address of the next element
    Node(int data){
        value = data;
        next = nullptr;
    }
};
Node* convertLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp; // movers next address is at temporary
        mover = temp;
    }
    return head;
}
// main traversal code used for very case
int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp!=nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int>arr = {15,8,4,9};
    Node* head = convertLL(arr);
    cout<<lengthofLL(head);
}