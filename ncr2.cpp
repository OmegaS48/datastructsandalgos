int f1(int n){
        if(n==0||n==1){
            return 1;
        }
        if(n>1){
            return n*f1(n-1);
        }
        return 0;
    }

#include <iostream>
using namespace std;
int main(){
    int n;
    int r;
    cout<<"n :";
    cin>>n;
    cout<<"r :";
    cin>>r;
    cout<<f1(n)/(f1(r)*f1(n-r));
    return 0;
}