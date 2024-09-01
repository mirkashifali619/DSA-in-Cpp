#include<iostream>
using namespace std;
void rec(int i , int n){
    if(i>n){
        return;
    }
    cout<<"Coding Ninjas"<<endl;
    rec(i+1,n);
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    rec(1,n);
}