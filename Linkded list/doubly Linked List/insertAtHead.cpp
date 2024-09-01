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
void insertAtHead(node* &head , int data){
    node *node2 = new node(data);
    node2->next = head;
    head->prev = node2;
    head=node2;
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
    node *node1 = new node(10);
    node *head = node1;
    cout<<"Before any Insertion:";
    print_LL(head);
    cout<<"After Insertion at Head:";
    insertAtHead(head,5);
    print_LL(head);
}