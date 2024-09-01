#include<iostream>
using namespace std;
void update_adress(int *p){
    p = p + 1 ;
    cout<<"Here we prints the increse value of our pointer of our function:"<<p<<endl;
}
void update_value(int *p){
    *p = *p + 1 ;
}
int main(){
    int value = 10;
    int *p = &value;
    cout<<"Before value incresement:"<<*p<<endl;
    update_value(p);
    cout<<"After value incresement:"<<*p<<endl;
    cout<<endl;
    // here are value is updated as we have incresed the value of our "value" variable as *p stores the value of "value"

    // Now we will se if we can update our address
    cout<<"Before address incresement:"<<p<<endl;
    update_adress(p);
    cout<<"After address  incresement:"<<p<<endl;
    // here both the values are same as we have incremented the address of the pointer which is placed in function 


}