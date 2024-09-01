#include <iostream>
#include<string>
#include <cctype>
using namespace std;
string reverse_string(string p){
    int start = 0 , end = p.size()-1;
    while(start<end){
        swap(p[start],p[end]);
        start++;
        end--;
    }
    return p;
}
int getcount(string s){
    int count = 0 ;
    for(int i = 0 ; i<s.size();i++){
        count++;
    }
    return count;
}
bool palindrome(string s){
    //Remove alphanumeric characters
    string clean;
    for(char c : s){
        if(isalnum(c)){
            clean += tolower(c);
        }
    }
    // check if its a palindrome
    int start = 0 , end = clean.size()-1;
    while(start<end){
        while(!isalnum(clean[start])) {
            start++;
        }
        while(!isalnum(clean[end])) {
            end--;
        }
        if(clean[start]!=clean[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    string s ;
    getline(cin,s);
    string reversed = reverse_string(s);
    cout<<"Reversed String :"<<reversed<<endl;
    cout<<"Length of String:"<<getcount(s)<<endl;
    if(palindrome(s)){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}