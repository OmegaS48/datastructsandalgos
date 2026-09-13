#include <iostream>
using namespace std;
int binsearch(int a[5],int key);
int main() {
    int a[5]={2,3,22,24,44};
    int key;
    cout<<"Enter search point : ";
    cin>>key;
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