#include<bits/stdc++.h>
using namespace std;

    bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        for (int i=0;i<arr.size()-2;i++) {
            int left=i+1;
            int right=arr.size()-1;
            while(left<right){
                int currentSum=arr[i]+arr[left]+arr[right];
                if(currentSum==target){
                    return true;
                }else if(currentSum<target){
                    left++;
                }else{
                    right--;
                }   
            }
        }
        return false;
    }

    int main(){
        vector<int> a={1, 4, 45, 6, 10, 8};
        cout<<hasTripletSum(a,13);
    }