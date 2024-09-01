#include<iostream>
using namespace std;
void sum(int n){
    cout<< n*(n+1)/2;
}
int main(){
    int n;
    cin>>n;
    sum(n);
}