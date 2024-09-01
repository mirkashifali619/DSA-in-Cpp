#include<iostream>
using namespace std;
int countDigits(int n){
	int count , digit , temp = n;
    while(temp!=0){
		digit = temp %10;
		if(digit>0 && n%digit == 0){
            count++;
        }
		temp = temp/10;
		}
        return count;
	}
int main(){
    //countDigits(332);
    cout<<countDigits(35);
}