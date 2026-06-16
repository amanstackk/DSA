#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the height of the pyramid:";
    cin>>n;
    int k;
    for(int i = 0; i < n ; i++){
        k=0;
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i + 1 && j >= 0; j < i ? k++ : k-- , j++){
            cout<<(char)('A' + k);
        }
        cout<<endl;
    }
    return 0;
}