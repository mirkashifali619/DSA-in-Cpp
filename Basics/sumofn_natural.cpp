#include<iostream>
using namespace std;
void sum_n(){
    int n , sum = 0 , i = 1;
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout<<sum<<endl;
}
int main(){
    sum_n();
}