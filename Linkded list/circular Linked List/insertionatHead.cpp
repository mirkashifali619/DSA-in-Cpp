#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    // creation of new node
    node(int data){
        this->data = data;
        this->next = next;
    }
    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Therefore memory is free of the node with data:"<<value<<endl;
    }
};
print_LL(node* &tail){
    node *temp = tail;
    while(temp->next=tail){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node *node1 = new node(10);
    node* tail = node1;
    print_LL(tail);

}