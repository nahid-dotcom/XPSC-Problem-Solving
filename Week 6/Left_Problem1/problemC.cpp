#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n<m){
            cout<<"No"<<endl;
        }
        else{
            if(n%2==0){
                if(m%2==0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                if(m%2!=0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
        }
        
    }
    return 0;
}
