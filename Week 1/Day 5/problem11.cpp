#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = false;
        if(s.size()==1){
            if(s[0]=='z') cout<<s[0]<<"a"<<endl;
            else{
                cout<<s[0]<<char(s[0]+1)<<endl;
            }
        }
        else{
            bool flag=false;
            for(int i=0; i<s.size()-1; i++){
                cout<<s[i];
                if(s[i]==s[i+1] && !flag){
                    if(s[i]=='z') cout<<"a";
                    else cout<<char(s[i]+1); 
                    flag=true;
                }
            }
            cout<<s.back();
            if(!flag){
                if(s.back()=='z')cout<<"a"<<endl;
                else{
                    cout<<char(s.back()+1);
                }             
            }
            cout<<endl;
        }
    }

    return 0;
}
