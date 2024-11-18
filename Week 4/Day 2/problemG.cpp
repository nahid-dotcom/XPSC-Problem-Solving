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
        string ans;
        for(int i=0; i<n; i++){
            if(i+2<n && s[i+2]=='0' && (s[i+3]!='0' || i+3>=n)){
                string nw=string(1,s[i])+string(1,s[i+1]);
                int x=stoi(nw);
                char a=char(96+x);
                ans.push_back(a);
                i+=2;
            }
            else{
                int x=s[i]-'0';
                char a=char(96+x);
                ans.push_back(a);
            }
        }
        cout<<ans<<endl;

    }    

    return 0;
}