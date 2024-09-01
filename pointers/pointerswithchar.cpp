#include<iostream>
using namespace std;
int main(){
    char a[6] = "abcde";
    cout<<a<<endl; // it prints the value of a array
    cout<<&a<<endl; // it prints the adress of the a array
    cout<<endl;

    char *ptr = a;
    cout<<ptr<<endl;// it prints the whole value of the array
    cout<<*ptr<<endl; //it points out to the first value of the array
    cout<<&ptr<<endl;
    cout<<&a<<endl;
}