#include <iostream>
using namespace std;
int binsearch(int a[5],int key);
int main() {
    int a[5]={34,66,24,89,44};
    int key;
    cout<<"Enter target point : ";
    cin>>key;
    for (int i=0;i<4;i=i+1){
        int index=i;
        for(int j=i+1;j<5;j=j+1){
            if(a[j]<a[index]){
            index=j;
            }
        }
        swap(a[i],a[index]);
    }
    cout<<binsearch(a,key);
    return 0;
}

int binsearch(int a[5],int key){
    int start=0;
    int end=4;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}