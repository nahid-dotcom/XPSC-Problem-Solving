#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            v[i]+=i+1;

        }
        int cnt=0;
        sort(v.begin(),v.end());
        for(auto it:v){
            if(c>=it){
                c-=it;
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}