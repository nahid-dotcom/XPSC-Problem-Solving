#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left=0, right=n-1,ans=n;
        while(left<=right){
            if(s[left]==s[right]){
                break;
            }
            else{
                ans-=2;
                left++;
                right--;

            }
        }
        cout<<ans<<endl;
    }

    return 0;
}