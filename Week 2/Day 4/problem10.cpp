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
        vector<pair<int,int>>p;
            int a=n-1,b=n;
            int terminate=n-1;
            int ans;
            while(terminate--){
                ans=(a+b+1)/2;
                p.push_back({a,b});
                b=ans;
                a--;
            }
            cout<<ans<<endl;

        for(auto [x,y]:p){
            cout<<x<<" "<<y<<endl;
        }

    }

    return 0;
}