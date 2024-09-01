#include<iostream>
using namespace std;
int main(){
    //pair of two integers
    pair < int , int> p = {1,3};
    cout<<"First value of pair:"<<p.first<<endl;
    cout<<"second value of pair:"<<p.second<<endl;
    
    //pair of nested integers
    pair < int , pair <int,int>> s = {5,{1,2}};
    cout<<"First value of first pair"<<s.first<<endl;
    cout<<"First value of second pair"<<s.second.first<<endl;
    cout<<"second value of second pair"<<s.second.second<<endl;
    
    //pair of arrays
    pair< int , int > arr[] = {{1,2},{3,4}};
}

