#include <iostream>
using namespace std;
void swapper(char &a,char &b);
int main() {
  string s1;
  string s2;
  cout<<"Enter string";
  cin>>s1;
  s2=s1;
        int start=0,end=s1.size()-1;
        while(start<=end){
            swapper(s1[start],s1[end]);
            start++;
            end--;
        }
        if(s1==s2){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
return 0;
}
 void swapper(char &a,char &b){
      int t=a;
      a=b;
      b=t;
  }