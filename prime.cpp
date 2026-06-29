#include <iostream>
using namespace std;
int p1(int n);
int main(){
    int a;
    cin>>a;
    cout<<p1(a);
    return 0;
}
int p1(int n){
    if(n<2){
        return false;
    }
    for (int i=2;i<n;i=i+1){
        if(n%2==0){
            return false;
        }
    }
    return true;
}