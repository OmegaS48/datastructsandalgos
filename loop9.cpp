#include <iostream>
using namespace std;
int main(){
    int n;
    int p=0;
    cout<<"Enter n ";
    cin>>n;
    if(n<2){
        cout<<"Not prime.";
    }
    else{
        for (int i=2;i<n;i=i+1){
            if(n%i==0){
                cout<<"NP";
                break;
            }
            else{
                cout<<"P";
                break;
            }
        }
    }
    return 0;
}