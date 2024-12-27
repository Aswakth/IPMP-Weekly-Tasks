#include<bits/stdc++.h>
using namespace std;

    int equilibriumPoint(vector<int> &arr) {
        if(arr.size()==0) return -1;
        int leftsum=0,rightsum=0;
        for(int i=0;i<arr.size();i++) rightsum+=arr[i];
        for(int i=0;i<arr.size();i++){
            rightsum-=arr[i];
            if(leftsum==rightsum) return i+1;
            leftsum+=arr[i];
        }
        return -1;
    }

    int main(){
        vector<int> a={1, 3, 5, 2, 2};
        cout<<equilibriumPoint(a);
    }