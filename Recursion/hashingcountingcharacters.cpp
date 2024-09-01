#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    //pre compute
    int hash[256]={0};
    for(int i = 0 ; i<s.size() ; i++){
        hash[s[i]]++;
    }
    int q; // it is basically the size of the string
    cin>>q;
    while(q--){
        char a ;
        cin>>a;
        //compute the answer
        cout<<hash[a]<<endl;
    }
}