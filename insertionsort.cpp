#include <iostream>
using namespace std;
int main(){
    int a[5]={3,8,9,0,1};
    for (int i=1;i<5;i=i+1){
    for (int j=i;j>0;j=j-1){
        if (a[j]<a[j-1]){
            swap(a[j],a[j-1]);
        }
    }
}
    for (int k=0;k<5;k++){
        cout<<a[k];
    }
    return 0;
}