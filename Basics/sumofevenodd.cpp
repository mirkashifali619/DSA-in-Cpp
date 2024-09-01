#include<iostream>
using namespace std;
int main(){
	int n , digit ,sum_even = 0 , sum_odd = 0;
    cin>>n;
	while(n>0){
		digit = n%10;
		if(digit%2==0){
			sum_even = sum_even + digit;
		}
		else if(digit%2!=0){
			sum_odd = sum_odd + digit;
		}
		n = n / 10;
	}
	cout<<"The sum of even digits:"<<sum_even<<endl;
	cout<<"The sum of odd digits:"<<sum_odd<<endl;
}
