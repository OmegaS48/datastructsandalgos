#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &arr,int start,int mid, int end){
    vector <int> temp;
    int i=start,j=mid+1;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            
            temp.push_back(arr[j]);
            j++;
        }

    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=mid){
        temp.push_back(arr[j]);
        j++;
    }

    for(int index=0;index<temp.size();index++){
        arr[index+start]=temp[index];
    }





}



void merger(vector <int> &arr,int start, int end){
    if(start<end){
        int mid=start+(end-start)/2;
        merger(arr,start,mid); //left
        merger(arr,mid+1,end); //right
        merge(arr,start,mid,end);
    }
}


int main() {
    vector <int> a={44,11,51,45,27,34,32,13,58,14,52,50,53,54};
    merger(a,0,a.size()-1);

    for (int val:a){
        cout<<val<<endl;
    }
    cout<<endl;

    return 0;
}