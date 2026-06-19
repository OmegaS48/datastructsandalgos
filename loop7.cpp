#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    int s=0;
    for (int i=1;i<a+1;i=i+1){
        s=s+(i*i);
    }
    cout<<s;
    return 0;
}