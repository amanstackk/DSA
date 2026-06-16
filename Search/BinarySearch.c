#include<stdio.h>

int binarysearch(int a[],int n,int x){
    int start=0;
    int end = n-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(a[mid]==x)
            return mid;
        else if(a[mid]<x)
            start=mid+1;
        else if(a[mid]>x)
            end=mid-1;
    }
    return -1;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d", binarysearch(a,10,7));
}