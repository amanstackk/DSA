#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no.";
    int n,c=0;
    cin>>n;
    while(n>0){
        n=n/10;
        c++;
    }
    cout<<"The no. of digits are:"<<c;
    return 0;
}