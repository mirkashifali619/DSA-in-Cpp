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
void insert_tail( node* &tail , int data){
    // creation of new node
    node *node2 = new node(data);
    tail -> next = node2;
    tail = tail->next;
    //head = node2;
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
    cout<<"Before insertion"<<endl;
    print_LL(head);
    insert_tail(tail,20);
    cout<<"After insertion"<<endl;
    print_LL(head);
}