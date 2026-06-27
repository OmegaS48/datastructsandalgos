#include <iostream>
using namespace std;
int f1(int n);
int main(){
    int n;
    cin>>n;
    cout<<f1(n);
    return 0;
}


int f1(int n){
        if(n==0){
            return 1;
        }
        else{
            return n*f1(n-1);
        }
    }