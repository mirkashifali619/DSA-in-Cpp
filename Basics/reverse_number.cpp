#include<iostream>
using namespace std;
int reverse_number(int n){
	int digit , rev_num = 0 ;
	while(n>0){
		digit = n % 10;
		rev_num = (rev_num*10) + digit;
		n = n /10;
	}
	cout<<rev_num;
}
int main() {
	int n;
	cin>>n;
	reverse_number(n);
}