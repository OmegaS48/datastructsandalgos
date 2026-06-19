#include <iostream>
using namespace std;
int main(){
    int f=1;
    int n;
    cout<<"Enter n ";
    cin>>n;
    if(n==0){
        cout<<1;
    }
    else {
        for(int i=1;i<n+1;i=i+1){
            f=f*i;
        }
        cout<<f;
    }
    return 0;
}