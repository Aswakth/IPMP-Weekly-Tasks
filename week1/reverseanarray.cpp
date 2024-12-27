#include<bits/stdc++.h>
using namespace std;

void reverse(int start,int end,vector<int> &a){
    if(start<=end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        reverse(start+1,end-1,a);
    }
}

void reverseArray(vector<int> &a) {
    reverse(0,a.size()-1,a);
}

int main(){
    vector<int> a={1,2,3,4,5};
    reverseArray(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}