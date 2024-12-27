#include<bits/stdc++.h>
using namespace std;

    bool subArrayExists(vector<int>& arr) {
        unordered_set<int> s;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==0 || s.find(sum)!=s.end()) return true;
            s.insert(sum);
        }
        return false;
    }

    int main(){
        vector<int> a={4, 2, -3, 1, 6};
        cout<<subArrayExists(a);
    }