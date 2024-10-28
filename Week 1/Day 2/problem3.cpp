#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<pair<string,string>,int> mp;
    for(int i=0; i<n; i++){
        string leaf,color;
        cin>>leaf>>color;
        mp[{leaf,color}]++;
    }
    cout<<mp.size();

    return 0;
}