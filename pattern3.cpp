#include <iostream>
using namespace std;
int main(){
    for (int i=5;i>=1;i=i-1){
        for(int j=5;j>=1;j=j-1){
            cout<<j*j;
        }cout<<" "<<endl;
    }
    return 0;
}