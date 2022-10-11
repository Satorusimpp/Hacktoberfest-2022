#include<iostream>
using namespace std;


void prime(int n){

for (int i=2;i<n;i++){
    if (n%i==0)
        return;
}
cout<<n<<endl;
}

int main(){
int start,end;
cout<<"Start: ";
cin>>start;

cout<<"End: ";
cin>>end;

cout<<"Prime Numbers:"<<endl;
for(int i=start;i<=end;i++){
    prime(i);
}


    return 0;
}
