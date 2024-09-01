#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
    // constructing a new node
    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAtTail(node* &tail , int data){
    node* node3 = new node(data);
    tail->next = node3;
    node3->prev = tail;
    tail = node3;
}
void print_LL(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node *node1 = new node(5);
    node *head = node1;
    node *tail = node1;
    cout<<"Before Insertion at Tail:";
    print_LL(head);
    cout<<"After Insertion at Tail:";
    insertAtTail(tail,10);
    print_LL(head);
}