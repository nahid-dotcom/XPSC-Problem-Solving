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
        vector<int>v;
        int a=1,b=n*n;
        for(int i=0; i<n*n; i++){
            if(i%2==0){
                v.push_back(a);
                a++;
            }
            else{
                v.push_back(b);
                b--;
            }
            
        }
        int line=n-1,cnt=1;
        vector<int>rev;
        for(int i=0; i<v.size(); i++){
            if(cnt%2==1){
                cout<<v[i]<<" ";
            }
            else{
                rev.push_back(v[i]);
            }
            
            if(i==line){
                
                line+=n;
                cnt++;
                reverse(rev.begin(),rev.end());
                for(auto it:rev){
                    cout<<it<<" ";
                }
                rev.clear();
                cout<<endl;
            }
        }

    }
    return 0;
}
