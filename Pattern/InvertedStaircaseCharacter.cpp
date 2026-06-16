#include<iostream>
using namespace std;
int main (){
    cout<<"From what character you wanna start: ";
    char a;
    cin>>a;

    int h = a - 'a' + 1;
    for(int i=h;i>0;i--){
        for(int j=i;j<=h;j++){
            cout<<(char)('a'+j - 1);
        }
        cout<<endl;
    }
    return 0;
}