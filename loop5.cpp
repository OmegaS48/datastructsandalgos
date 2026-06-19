#include <iostream>
using namespace std;
int main(){
    int a=2;
    int b;
    cout<<"Enter power ";
    cin>>b;
    for (int i=1;i<b;i=i+1){
        a=a*b;
    }
    cout<<a;
    return 0;
}