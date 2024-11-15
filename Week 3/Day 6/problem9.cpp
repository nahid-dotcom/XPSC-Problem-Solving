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
        long long int sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]<0){
                sum+=v[i]*(-1);
            }
            else{
                sum+=v[i];
            }
            
        }
        v.push_back(1);
        int operation=0;
        vector<int>opt;
        for(auto it:v){
            if(it<0){
                opt.push_back(it);
            }
            else if(it>0){
                if(!opt.empty()){
                    operation++;
                    opt.clear();
                }
            }
        }
        cout<<sum<<" "<<operation<<endl;
    }

    return 0;
}