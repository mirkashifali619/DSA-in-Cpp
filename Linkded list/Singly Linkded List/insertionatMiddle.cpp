#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    // creation of node 
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insert_head( node* &head , int data){
    // creation of new node
    node *node2 = new node(data);
    node2->next = head;
    head = node2;
    //head = node2;
}
void insert_tail( node* &tail , int data){
    // creation of new node
    node *node3 = new node(data);
    tail -> next = node3;
    tail = tail->next;
    //head = node2;
}
void insert_middle(node* &tail , node* &head , int position , int data){
    if(position==1){
        insert_head(head,data);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insert_tail(tail,data);
        return;
    }
    cout<<"data of temp:"<<temp->data;
    // creation of new node
    node *node4 = new node(40);
    node4 -> next = temp->next;
    temp->next = node4;
}
void print_LL(node* &head){
    node *temp = head ; // temp here is used to traverse the linked list
    while(temp!=0){
        cout<< temp ->data <<" ";
        temp = temp-> next; // pointing the temp towards the next node 
    }
    cout<<endl;
}
int main(){
    node *node1 = new node(10);
    // creation of head which is pointing to the node 1 data , that is 10
    node *head = node1;
    node *tail = node1;
    cout<<"Before insertion at head:";
    print_LL(head);
    cout<<"After insertion at head:";
    insert_head(head,5);
    print_LL(head);
    cout<<"Before insertion at Middle:";
    print_LL(head);
    insert_middle(tail,head,2,40);
    cout<<endl<<"After insertion at Middle:";
    print_LL(head);   
}