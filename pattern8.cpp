#include <iostream>
using namespace std;
int main(){
    int n=1;
    for (int i=1;i<6;i=i+1){
        for(int j=1;j<=i;j=j+1){
            cout<<j<<" ";
        }cout<<" "<<endl;
    }
    return 0;
}