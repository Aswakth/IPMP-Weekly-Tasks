#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    vector<int> ans;
    map<int,int> m;
    for(int i=0;i<arr.size();i++){
        if(m.find(arr[i])==m.end()){
            m[arr[i]]=i;
        }else{
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> a={2, 3, 1, 2, 3};
    vector<int> ans=findDuplicates(a);
    for(int n: ans){
        cout<<n<<" ";
    }
}