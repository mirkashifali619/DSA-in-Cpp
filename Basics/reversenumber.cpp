#include<iostream>
using namespace std;
void reverse_number(int n){
   int digit  , rev_number;
   while(n>=0){
      digit = n%10;
      rev_number = (rev_number*10) + digit;
      n = n / 10;
 }
  cout<<rev_number;
}
int main(){
    long n ; 
    cout<<"Enter the number:";
    cin>>n;
    reverse_number(n);
}