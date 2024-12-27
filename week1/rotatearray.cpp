#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr) {
    reverse(arr.begin(),arr.end());
    reverse(arr.begin()+1,arr.end());
}

int main(){
    vector<int> a={1,2,3,4,5};
    rotate(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}