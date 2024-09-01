#include<iostream>
using namespace std;
bool rotate_string(string s , string goal){
    // edge case 
    if(s.length()!=goal.length()) return false;
    string temp = s + s ;
    if(temp.find(goal)!=string::npos){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    // s = "abcde" we need to check goal is part of s , goal = "cedeab" , ans = True 
    string s , goal; 
    cout<<"Enter String s:";
    cin>>s;
    cout<<"Enter String goal:";
    cin>>goal;  
    bool result = rotate_string(s,goal);
    if(result){
        cout<<"Goal is a part of s!!"<<endl;
    }
    else{
        cout<<"Goal is not part of s!!"<<endl;
    }


}