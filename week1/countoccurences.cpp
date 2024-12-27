#include<bits/stdc++.h>
using namespace std;

int countFreq(vector<int>& a, int target) {
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==target) count++;
        else if(a[i]>target) break;
    }
    return count;
}

int main(){
    vector<int> a={1,1,2,2,2,2,2,3,4};
    cout<<countFreq(a,2);
}