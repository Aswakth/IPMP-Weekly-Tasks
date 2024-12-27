#include<bits/stdc++.h>
using namespace std;

    void segregateElements(vector<int>& arr) {
        vector<int> neg;
        vector<int> pos;
        for(int n:arr){
            if(n<0) neg.push_back(n);
            else pos.push_back(n);
        }
        int c=0;
        for(int n:pos){
            arr[c]=n;
            c++;
        }
        for(int n:neg){
            arr[c]=n;
            c++;
        }
    }

    int main(){
        vector<int> a={-5, 7, -3, -4, 9, 10, -1, 11};
        segregateElements(a);
        for(int n: a){
            cout<<n<<" ";
        }
    }