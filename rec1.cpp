#include <iostream>
using namespace std;
//void swapper(int &a,int &b);
int ner(int n);
int main() {
    //int A,B;
    int n;
    cout<<"n : ";
    cin>>n;
    cout<<ner(n);
    return 0;
}

int ner(int n){
    if (n==1){
        cout<<1;
    }
    cout<<ner(n);
    ner(n-1);
};
//void swapper(int &a,int &b){
//    int t;
//    t=a;
//   a=b;
//    b=t;
//}