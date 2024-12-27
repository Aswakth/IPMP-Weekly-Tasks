#include<bits/stdc++.h>
using namespace std;

    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int i=0, j=arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]==target) return true;
            else if(arr[i]+arr[j]>target) j--;
            else if(arr[i]+arr[j]<target) i++;
        }
        return false;
    }

    int main(){
        vector<int> arr={1, 4, 45, 6, 10, 8};
        cout<<twoSum(arr,16);
    }