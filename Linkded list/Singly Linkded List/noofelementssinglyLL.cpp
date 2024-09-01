#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
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
        mover-> next = temp;
        mover = temp;
    }
    return head;
}
int search(Node* head , int k){
    Node* temp = head;
    while(temp!=nullptr){
        if(k==temp->value){
            cout<<"Founded The Element"<<endl;
        }
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {12,22,9,78};
    Node* head = convertLL(arr);
    search(head,13);


}