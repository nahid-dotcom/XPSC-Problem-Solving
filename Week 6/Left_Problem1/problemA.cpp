#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=true;
        vector<int>v(n),another;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int check=1,x=0;
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                x=i;
                break;
            }
            check++;
        }
        if(check==n){
            cout<<"Yes"<<endl;
        }
        else{
            for(int i=x+1; i<n; i++){
                another.push_back(v[i]);
            }
            for(int i=0; i<=x; i++){
                another.push_back(v[i]);
            }
            for(int i=0; i<n-1; i++){
                if(another[i]>another[i+1]){
                    flag=false;
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

      

        
    }
    return 0;
}
