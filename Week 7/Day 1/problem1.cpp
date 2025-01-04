#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    bool flag=false;
    for(int i=0; i<(1<<n); i++){
        long long sum=0;
        for(int k=0; k<n; k++){
            if((i>>k)&1){
                sum+=v[k];
            }
            else{
                sum-=v[k];
            }
        }
        if(sum%360==0){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
