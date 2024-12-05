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
        vector<int>v(n),even,odd;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]%2==0){
                even.push_back(v[i]);
            }
            else{
                odd.push_back(v[i]);
            }
        }
        long long int ans=0;
        if(even.size()==n || odd.size()==n){
            cout<<"0"<<endl;
        }
        else{
            sort(even.begin(),even.end());
            auto it=max_element(odd.begin(),odd.end());
            long long int mx=*it;
            for(int i=0; i<even.size(); i++){
                if(even[i]>mx){
                    ans=even.size()+1;
                    break;
                }
                else{
                    ans++;
                    mx+=even[i];
                }
            }
            cout<<ans<<endl;
        }
        

    }
       
        
    return 0;
}
