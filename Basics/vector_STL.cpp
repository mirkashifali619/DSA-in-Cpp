#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector <int> v ;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"Capacity of vector V:"<<v.capacity()<<endl;
    cout<<"Size of vector v:"<<v.size()<<endl;

    //cout<<"Element at the 2nd index of vector v:"<<v.at(2)<<endl;
    //cout<<"Front element :"<<v.front()<<endl;
    //cout<<"Last element:"<<v.back()<<endl;

    //iterating a vector
    vector <int>::iterator it;
    for(auto it=v.begin() ; it!=v.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    v.insert(v.begin()+2,200);


}