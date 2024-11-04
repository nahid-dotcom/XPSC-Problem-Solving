#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int problem=1,cnt=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        if(problem<=v[i]){
            cnt++;
            problem++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}