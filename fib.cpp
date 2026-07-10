int f(int n){
    if(n>1){
        return n+f(n-1);
    }
    else{
        return 1;
    }
}

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number of numbers ";
    cin>>a;
    cout<<f(a);
    return 0;
}