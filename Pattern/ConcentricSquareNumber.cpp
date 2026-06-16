#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the square: ";
    int n;  
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j<i){
                cout<<n-j;
            }
            else if(j>=i&&j<2*n-1-i){
                cout<<n-i;
            }
            else {
                cout<<j-n+2;
            }
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j<=2-i){
                cout<<n-j;
            }
            else if(j<2*i+2){
                cout<<i+1;
            }
           else {
               cout<<j-n+2;
         }
        }
        cout<<endl;
    }
    return 0;
}