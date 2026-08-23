#include <iostream>
using namespace std;
int main(){
    int a[6]={2,5,7,8,3,9};
    for (int i=0;i<5;i=i+1){
        int index=i;
        for(int j=i+1;j<6;j=j+1){
            if(a[j]<a[index]){
            index=j;
        }
        }
        
        swap(a[i],a[index]);
        
    }
    for (int k=0;k<6;k=k+1){
        cout<<a[k];
    }
    return 0;
}