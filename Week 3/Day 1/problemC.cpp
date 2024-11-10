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
        set<int>s;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a==0){
                continue;
            }
            s.insert(a);
        }
        if(s.size()<2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}