int sum(int a,int b){
    return a+b;
}

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<sum(a,b)+sum(c,d);
return 0;
}