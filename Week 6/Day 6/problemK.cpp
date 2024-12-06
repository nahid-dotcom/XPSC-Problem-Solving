#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(k);
        for(int i=0; i<k; i++){
            cin>>v[i];
        }       
        vector<int>diff(k);
        for(int i=1; i<k; i++) {
            diff[i]=v[i]-v[i-1];
        }      
        bool flag = true;
        for(int i=1; i<k-1; i++) {
            if (diff[i]>diff[i+1]) {
                flag=false;
                break;
            }
        }
        if (flag && k>1) {
            long long fst=v[0];
            long long req=(long long)diff[1]*(n-k+1);
            if (fst>req) {
                flag = false;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
