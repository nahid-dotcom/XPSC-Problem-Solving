#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>teacher(m);
        for(int i=0; i<m; i++){
            cin>>teacher[i];
        }
        sort(teacher.begin(),teacher.end());
        for(int i=0; i<q; i++){
            int a,b,ans;
            int david;
            cin>>david;
            auto value=upper_bound(teacher.begin(),teacher.end(),david);
            if(value==teacher.end()){
                a=n;
                b=*--value;
                ans=a-b;

            }
            else if(value==teacher.begin()){
                a=*value;
                b=1;
                ans=a-b;

            }
            else{
                a=*value;
                b=*--value;
                ans=(a-b)/2;
            }
            cout<<ans<<endl;

        }

    }

    

    return 0;
}