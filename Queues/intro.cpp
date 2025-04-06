#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>ans;
    ans.push(10);
    ans.push(20);
    ans.push(30);
    cout<<"Element at top of Queue:"<<ans.front()<<endl;
    ans.pop();
    cout<<"Element at the top of Queue after pooping:"<<ans.front()<<endl;
}