#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    vector<int>ans;
    int up=0,down=0;
    while(up<n && down<m){
        if(a[up]<=b[down]){
            ans.push_back(a[up]);
            up++;
        }
        else{
            ans.push_back(b[down]);
            down++;
        }
    }
    while(up<n){
        ans.push_back(a[up]);
        up++;
    }
    while(down<m){
        ans.push_back(b[down]);
        down++;
    }
    for(auto value:ans){
        cout<<value<<" ";
    }cout<<endl;

    return 0;
}