#include<iostream>
#include<string>
using namespace std;
string reverses(string s){
    int start = 0 , end = s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main(){
    string s ;
    getline(cin,s);
    string reversed = reverses(s);
    cout<<reversed;
}