#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    stack<int>ans;
    // pushing elements in the stack 
    while(q.size()>0){
        int element = q.front();
        q.pop();
        ans.push(element);
    }
    // then again pushing elements back in the quue 
    while(ans.size()>0){
        int element = ans.top();
        ans.pop();
        q.push(element);
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}