#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n=arr.size();
        map<int,int>mp;
        int l=0,r=0,ans=0;
        long long sum=0;
        while(r<n){
            sum+=arr[r];
            if(sum==k){
                ans=max(ans,r-l+1);
            }
            int remain=sum-k;
            if(mp.find(remain)!=mp.end()){
                ans=max(ans,r-mp[remain]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=r;
            }
            r++;
        }
        return ans;
    }
};
