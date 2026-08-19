#include <iostream>
using namespace std;
int main(){
    int a[5]={2,54,33,44,56};
    int last=56;
    for (int i=3;i>=0;i--){
    a[i+1]=a[i];
    
    }
    a[0]=last;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}