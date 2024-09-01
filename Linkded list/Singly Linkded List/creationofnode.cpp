#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    // constructor
    node(int data){
        this -> data = data ;
        this -> next = NULL;
    }
};
int main(){
    node *n1 = new node(10);
    cout<<"Value at Node:"<<n1 -> data<<endl;
    cout<<"Address of Node:"<<n1->next<<endl;
}