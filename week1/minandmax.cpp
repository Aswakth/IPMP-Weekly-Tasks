#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(vector<long long int> arr) {
    //<min,max>
    pair<long long,long long> p;
    p.first=arr[0];
    p.second=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<p.first) p.first=arr[i];
        if(arr[i]>p.second) p.second=arr[i];
    }
    return p;
}

int main(){
    vector<long long int> arr={3, 2, 1, 56, 10000, 167};
    pair<long long,long long> p=getMinMax(arr);
    cout<<p.first<<" "<<p.second;
}