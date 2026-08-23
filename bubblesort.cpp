#include <iostream>
using namespace std;
int main(){
    int a[5]={4,5,1,6,9};
    for (int i=0;i<4;i=i+1){
        for (int j=0;j<4;j=j+1){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for (int k=0;k<5;k=k+1){
        cout<<a[k];
    }
    return 0;
}