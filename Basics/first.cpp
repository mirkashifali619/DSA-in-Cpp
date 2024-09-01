#include<iostream>
using namespace std;
class Areas {
   public:
   float volume_cube(int r){
    return r*r*r;
   }
   float volume_sphere(int r){
    return 4/3*3.14*r*r*r;
   }
   float volume_square(int s){
    return s*s*s;
   }
   void result(){
    cout<<"Volume of cube:"<<volume_cube(3)<<endl;
    cout<<"Volume of sphere:"<<volume_sphere(3)<<endl;
    cout<<"Volume of square:"<<volume_square(5)<<endl;
   }
};
int add(int x , int y){
   int c = x+y;
   return c;
}
int main(){
    //cout<<"addition of x and y is:"<<add(3,4)<<endl;
    //Areas a;
    //a.result();
    //return 0;
}