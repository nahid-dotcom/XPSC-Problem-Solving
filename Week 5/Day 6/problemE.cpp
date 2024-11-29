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
        vector<int>v(n);
        int a=0,b=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==0){
                a++;
            }
            else{
                b++;
            }
        }
        if(a<=b+1) cout<<"0"<<endl;
        else{
            int mx=INT_MIN;
            for(auto it:v){
                if(it>mx){
                    mx=it;
                }
            }
            if(mx!=1){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
    }

    return 0;
}