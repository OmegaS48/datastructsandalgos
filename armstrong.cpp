#include <iostream>
#include <math.h>
bool arm(int n);
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<arm(n);
    return 0;
}

bool arm(int n){
    int s=0,r;
    int t=n;
    while(n>0){
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==t){
        return 1;
    }
    return 0;
}