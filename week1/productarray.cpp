#include<bits/stdc++.h>
using namespace std;

vector<long long> productExceptSelf(vector<int>& arr) {
        int flag=0;
        long long prod=1;
        int count=0;
        for(int n: arr){
            if(n!=0){
                prod=prod*n;
            }else if(n==0){
                flag=1;
                count++;
            }
        }
        vector<long long> ans;
        for(int n: arr){
            if(flag!=1){
                ans.push_back(prod/n);    
            }else if(flag==1 && n!=0 && count==1){
                ans.push_back(0);
            }else if(flag==1 && n==0 && count==1){
                ans.push_back(prod);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
    }

    int main(){
        vector<int> a={10, 3, 5, 6, 2};
        vector<long long> ans=productExceptSelf(a);
        for(long long n: ans){
            cout<<n<<" ";
        }
    }