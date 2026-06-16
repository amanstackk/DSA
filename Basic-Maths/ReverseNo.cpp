#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no.";
    int n,lastd=0,r=0;
    cin>>n;
    while(n>0){
        lastd=n%10;
        r=r*10+lastd;
        n/=10;
    }
    cout<<"The no. of digits are:"<<r;
    return 0;
}