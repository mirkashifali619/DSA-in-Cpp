#include<iostream>
#include<bits/stdc++.h>
#include<list>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(12);
    ls.push_back(13);
    ls.push_front(11);
    ls.push_back(14);
    for(int i : ls){
        cout<<i<<" ";
    }
    cout<<endl;
    //iterating the list
    list<int> s(5 , 10);
    list <int> :: iterator it;
    for(auto it:s){
       cout<<it<<" ";
    }
    cout<<endl;
    //insertion in a list
    s.insert(s.begin(),100);//{100,10,10,10,10,10}
    for(auto it:s){
       cout<<it<<" ";
    }
    cout<<endl;
    //s.insert(s.begin()+1,200);//{100,10,200,10,10,10}
    //s.erase(s.begin()+2);
    for(auto it:s){
       cout<<it<<" ";
    }

}