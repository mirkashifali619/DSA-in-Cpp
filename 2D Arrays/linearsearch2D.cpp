#include<iostream>
using namespace std;
bool is_present(int arr[][3] , int target , int row , int col){
    for(int i = 0 ; i<3 ; i++){
        for (int j = 0 ; j<3 ;j++){
            if(arr[i][j]==target) return 1 ;
        }
    }
    return 0 ;
}
int main(){
    int arr[3][3] ;
    cout<<"Enter the Elements of Array:"<<endl;
    for(int i = 0 ; i<3 ;i++){
        for(int j=0 ; j<3 ; j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter Element for search:"<<endl;
    cin>>target;
    if(is_present(arr,target,3,3)){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Not Present!!"<<endl;
    }
}