#include<iostream>
using namespace std;
int main(){
    int arr[10] = {3,4,6};
    // there are two ways by which we can find address of fisrt element
    cout<<"First Method:"<<arr<<endl;
    cout<<"Second Method:"<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr + 1 <<endl;
    cout<<&arr[1]<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<*(arr+1)<<endl;// thus arr[i] = *(arr+i)
    cout<<endl;
    
    int *p = arr;
    cout<<p<<"-"<<*p<<endl;
    cout<<"size of pointer:"<<sizeof(p)<<endl;
    cout<<"Size of array:"<<sizeof(arr)<<endl;
    cout<<"size of pointer:"<<sizeof(*(p))<<endl;
    cout<<endl;

    int a[10] = {1,2,4};
    //a = a +1 , it will through an error
    int *z = &a[0];
    // it moves the addres of the a by one place
    cout<<"before value:"<<*z<<endl;
    cout<<"before address:"<<z<<endl;
    z = z + 1; // it moves the adress of a[0] by one place
    cout<<"after value:"<<*z<<endl;
    cout<<"after address:"<<z<<endl;
}  