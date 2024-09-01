#include<iostream>
using namespace std;
int main(){
    int num = 6 ; 
    int *ptr = &num;

    cout<<"Value of num:"<<num<<endl;
    cout<<"Value of ptr :"<<*ptr<<endl;
    cout<<"Value of ptr without *:"<<ptr<<endl;
    cout<<"Size of value:"<<sizeof(num)<<endl;
    cout<<"Size of pointer:"<<sizeof(*ptr)<<endl;
    cout<<"Size of pointer without* :"<<sizeof(ptr)<<endl;
    cout<<endl;

    //another way to initialize pointer
    int *p = 0 ;
    p = &num;
    cout<<"Value of p :"<<*p<<endl;
    cout<<"Value of p without *:"<<p<<endl;
    cout<<endl;
    //copying a pointer
    
    int *q = p ;
    cout<<p<<" Address "<<q<<endl;
    cout<<*p<<" Value "<<*q<<endl;
}