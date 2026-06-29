#include <iostream>
using namespace std;
void swapper(int &m,int &n);//passbyreference
int main(){
    int a,b;
    cin>>a>>b;
    swapper(a,b);
    cout<<a<<b;
    return 0;
}

void swapper(int &m,int &n){
    int t;
    t=m;
    m=n;
    n=t;
}