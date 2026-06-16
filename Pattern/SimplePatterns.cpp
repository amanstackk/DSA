#include<iostream>
using namespace std;
void diamond(){
    cout<<"WHat should be the diamond's height?"<<endl;
    int h;
    cin>>h;
    cout<<endl;
    if(h%2==0){
    for(int i=0;i<h/2;i++){
        for(int j=0;j<h/2-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
        }
    for(int i=h/2;i>0;i--){
        for(int j=0;j<h/2-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    }  
    else{
    for(int i=0;i<h/2+1;i++){
        for(int j=0;j<h/2-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
        }
    for(int i=h/2;i>0;i--){
        for(int j=0;j<h/2-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    }
}
void dimondofspace(){
    cout<<"what should be the height of whole: ";
    int n;
    cin>>n;
                  
    for(int i=0;i<n/2;i++){

        for(int j=0;j<n/2-i;j++){
            cout<<'*';
        }

        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int j=0;j<n/2-i;j++){
            cout<<'*';
        }

        cout<<endl;
    }
    for(int i=0;i<n/2;i++){

        for(int j=0;j<=i;j++){
            cout<<'*';
        }

        for(int j=0;j<n-2*i-2;j++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<'*';
        }

    cout<<endl;
    }
}
void horizotalhourglass(){
    int n;
    cout<<"Enter the height of hourglass: ";
    cin>>n;

    for(int i=0;i<n/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-2*i-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n/2;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<n-2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main (){
    cout<<"Choose the pattern:"<<endl<<"1. Diamond"<<endl<<"2. Diamond of Space"<<endl<<"3. Horizontal Hourglass"<<endl;
    int c;
    cin>>c;
    cout<<endl;
    switch(c){
        case 1:
        diamond();
        break;
        case 2:
        dimondofspace();
        break;
        case 3:
        horizotalhourglass();
    }
    return 0;
}