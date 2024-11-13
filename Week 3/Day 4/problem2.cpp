#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    vector<int>ans;
    int up=0,down=0;
    int cnt=0;
    while(down<m){
        if(up<n && a[up]<b[down]){
            cnt++;
            up++;
        }
        else{
            ans.push_back(cnt);
            down++;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}