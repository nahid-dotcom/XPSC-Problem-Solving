#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        long long n,XOR=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            XOR^=v[i];
        }
        if(n%2==0 && XOR!=0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<XOR<<endl;
        }
    }
    
    return 0;
}