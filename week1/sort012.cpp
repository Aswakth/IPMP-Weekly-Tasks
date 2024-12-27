#include<bits/stdc++.h>
using namespace std;

    void sort012(vector<int>& arr) {
        int c0=0,c1=0,c2=0;
        for(int n: arr){
            if(n==0) c0++;
            else if(n==1) c1++;
            else c2++;
        }
        int c=0;
        for(int i=0;i<c0;i++){
            arr[c]=0;
            c++;
        }
        for(int i=0;i<c1;i++){
            arr[c]=1;
            c++;
        }
        for(int i=0;i<c2;i++){
            arr[c]=2;
            c++;
        }
    }
    
    int main(){
        vector<int> a={0, 1, 2, 0, 1, 2};
        sort012(a);
        for(int n: a){
            cout<<n<<" ";
        }
    }