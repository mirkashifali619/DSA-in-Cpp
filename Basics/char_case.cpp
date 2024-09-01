#include<iostream>
using namespace std;
int main() {
	char k;
	cin>>k;
	//uppercase characters
	if(k>='A' &&  k<='Z'){
		cout<<"1"<<endl;
	}
	if (k<='a' && k>='z'){
		cout<<"0"<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}