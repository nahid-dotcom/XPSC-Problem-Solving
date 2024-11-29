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
        int i=2, j=3*n,cnt=0;
        vector<int>idx;
        while(i<j){
            cnt++;
            idx.push_back(i);
            idx.push_back(j);
            i+=3;
            j-=3;
        }
        cout<<cnt<<endl;
        for(auto it:idx){
            cout<<it<<" ";
        }cout<<endl;
    }

    return 0;
}