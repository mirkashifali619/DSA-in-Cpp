#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter the elements of the array:"<<endl;
    // row - wise input
    /*for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            cin>>arr[i][j];
        }
    }
    */
    // column - wise input 
    for(int j = 0 ; j<3 ; j++){
        for(int i = 0 ; i<3 ; i++){
            cin>>arr[j][i];
        }
    }
    for(int j = 0 ; j<3 ; j++){
        for(int i = 0 ; i<3 ; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}