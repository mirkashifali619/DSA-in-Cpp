#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(30);
    s.push(31);
    s.push(32);
    s.push(33);
    s.push(34);
    s.push(35);
    s.push(36);
    cout<<s.top()<<endl;
}