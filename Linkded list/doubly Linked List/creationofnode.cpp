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
    cout<<"Values:";
    print_LL(head);
}