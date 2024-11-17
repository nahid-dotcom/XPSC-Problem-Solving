#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        deque<int>d;
        d.push_back(b);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>=a){
                d.push_back(a-1);
            }
            else{
                d.push_back(x);
            }
        }
        long long sum=accumulate(d.begin(),d.end(),0LL);
        cout<<sum<<endl;
    }

    return 0;
}