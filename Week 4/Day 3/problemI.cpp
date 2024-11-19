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
        int m=(n*(n-1))/2;
        vector<int>v(m);
        for(int i=0; i<m; i++){
            cin>>v[i];
        }
        int x=n-1;
        sort(v.begin(),v.end());
        vector<int>result;
        for(int i=0; i<m; i++){
            result.push_back(v[i]);
            i+=x-1;
            x--;
        }
        int bk=result.back();
        result.push_back(bk);
        for(auto it:result){
            cout<<it<<" ";
        }cout<<endl;
    }

    return 0;
}