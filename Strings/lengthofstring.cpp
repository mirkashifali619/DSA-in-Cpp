#include<iostream>
#include<string>
using namespace std;

void reverstring(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(ch[s++],ch[e--]);
    }
}
int getlength(char ch[]){
    int count = 0;
    for(int i = 0 ; ch[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char ch[20];
    cout<<"Enter your Name"<<endl;
    cin>>ch;
    
    cout<<"Length of name:"<<getlength(ch)<<endl;
    int len = getlength(ch);
    cout<<"Reverse of the string:";
    reverstring(ch,len);

    return 0;
}