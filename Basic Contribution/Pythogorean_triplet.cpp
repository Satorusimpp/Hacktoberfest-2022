#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    cout<<"Enter z:";
    cin>>z;

    if (x*x + y*y == z*z){
        cout<<"Triplet";
    }

    else{
        cout<<"Not";
    }
    return 0;
}
