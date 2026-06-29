#include <iostream>
using namespace std;
char capitalize(char s){
    s=s-32;
    return s;
}


int main(){
    char s;
    cin>>s;
    cout<<capitalize(s);
    return 0;
}