#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        long long ans=0,sum=0;
        int l=0,r=0;
        while(r<n){
            sum+=arr[r];
            if(r-l+1==k){
                ans=max(ans,sum);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};

