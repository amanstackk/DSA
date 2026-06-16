#include<iostream>
#include<vector>
using namespace std;

void f(int i, vector<int>v , vector<int>a){
    if(i >= a.size()){
        for(int x : v)cout << x << " ";
        cout<<endl;
        return;
    }

    v.push_back(a[i]);
    f(i+1, v, a);
    v.pop_back();
    f(i+1, v, a);
}

int main(){
    vector<int> a = {3, 1, 2};
    vector<int> v;
    f(0,v,a);
}