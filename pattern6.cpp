#include <iostream>
using namespace std;
int main(){
    int n=1;
    for (int i=1;i<6;i=i+1){
        for(char j=1;j<6;j=j+1){
            cout<<n<<" ";
            n=n+1;
        }cout<<" "<<endl;
    }
    return 0;
}