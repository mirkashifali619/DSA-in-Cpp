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
    //destructorr
    ~node(){
        int value = this->data;
        if(this->next==NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Therefore memory is free of the node with data:"<<value<<endl;
    }
};
void insertAtHead(node* &head ,node* &tail, int data){
    if(head==NULL){
        node *node2 = new node(data);
        head = node2;
        tail = node2;
    }
    else{
        node *node2 = new node(data);
        node2->next = head;
        head->prev = node2;
        head=node2;
    }
}
void insertAtTail(node* &tail , node* &head ,int data){
    if(tail==NULL){
        node* node3 = new node(data);
        tail = node3;
        head = node3;
    }
    else{
    node* node3 = new node(data);
    tail->next = node3;
    node3->prev = tail;
    tail = node3;
    }
}
void insertAtMiddle(node* &head , node* &tail , int pos , int data){
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    node *temp = head;
    int cnt = 1 ;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }
    node* node4 = new node(data);
    node4->next = temp->next ;
    temp->next->prev = node4;
    temp->next = node4;
    node4->prev = temp;
}
void deletion(node* &head , node* &tail , int pos){
    if(pos==1){
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
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
    node *tail = node1;
    cout<<"Before any Insertion:";
    print_LL(head);
    cout<<"After Insertion at Head:";
    insertAtHead(head,tail,5);
    print_LL(head);
    cout<<"Before Insertion at Tail:";
    print_LL(head);
    cout<<"After Insertion at Tail:";
    insertAtTail(tail,head,20);
    print_LL(head);
    cout<<"After Insertion at Middle:";
    insertAtMiddle(head,tail,2,7);
    print_LL(head);
}