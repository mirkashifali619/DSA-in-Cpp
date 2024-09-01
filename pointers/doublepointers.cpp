#include<iostream>
using namespace std;
void update_adress(int **q){
    //updating its adress
    //q = q + 1 ; . it will change nothing
    //updating its values
    *q = *q + 1 ;
}
int main(){
    int value = 10;
    int *p = &value;
    int **q = &p;
    cout<<"Adress of first pointer:"<<p<<endl;
    cout<<"Adress of second pointer:"<<q<<endl;

    cout<<endl<<"Value of first pointer:"<<*p<<endl;
    cout<<"Value of second pointer:"<<**q<<endl;

    cout<<endl<<p<<endl; //address of value
    cout<<&p<<endl; // address of p
    cout<<q<<endl;// address of p
    cout<<&q<<endl; // address of q

    //printing value of p
    cout<<endl<<*p<<endl;
    cout<<**q<<endl;

    //printing address of value
    cout<<endl<<&value<<endl;
    cout<<p<<endl; // it poiints out to the adress of value
    cout<<*q<<endl; // it points out to the adress of p
    cout<<endl;

    cout<<"value of q before:"<<**q<<endl;
    cout<<"address of p before :"<<*q<<endl;
    cout<<"address of q before "<<q<<endl;
    update_adress(q);
    cout<<endl<<"value after q :"<<**q<<endl;
    cout<<"adress of p after:"<<*q<<endl;
    cout<<"adress after q:"<<q<<endl;

}