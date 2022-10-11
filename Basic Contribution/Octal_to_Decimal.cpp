#include<iostream>
using namespace std;

int main(){
int n,sum=0,i=1;
cout<<"Enter Octal Equivalent: ";
cin>>n;

while(n>0){
    sum+=i*(n%10);
    n/=10;
    i*=8;
}

cout<<"Decimal Equivalent: "<<sum;

    return 0;
}
