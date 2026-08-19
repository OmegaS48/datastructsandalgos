#include <iostream>
using namespace std;

void fun(int a[],int n){
for (int i=0;i<5;i++){
    cout<<a[i]<<endl;
}
}

int main(){
    int a[5]={1,2,3,4,5};
    fun(a,5);
    cout<<sizeof(a);
    return 0;
}