#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int n;
    cin>>n;
    for (int i=0;i<n;i=i+1){
        a=b+c;
        c=b;
        b=a;
        cout<<a<<" ";
    }
    return 0;
}