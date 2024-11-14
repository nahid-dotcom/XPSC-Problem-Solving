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
        string s;
        cin>>s;
        long long int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                ans+=i;
            }
            else if(s[i]=='R'){
                ans+=(n-i-1);
            }
        }
        deque<long long int>d;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                long long int a=n-i-1;
                long long int b=i;
                long long int x=a-b;
                d.push_back(x); 
            }
            else if(s[i]=='R'){
                long long int a=i;
                long long int b=n-i-1;
                long long int x=a-b;
                d.push_back(x);
            }
        }
        sort(d.begin(),d.end(),greater<int>());
        for(int i=0; i<n; i++){
            int a=d.front();
            d.pop_front();
            if(a>0){
                ans+=a;
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}