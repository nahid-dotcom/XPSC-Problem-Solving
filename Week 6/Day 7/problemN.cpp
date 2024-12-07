#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="()"){
            cout<<"NO"<<endl;
            continue;
        }
        bool flag=false;
        for (int i=0; i<s.size()-1; i++){
            if (s[i]==')' && s[i+1]=='(') {
                flag=true;
                break;
            }
        }
        if(flag){
            string result(s.size(),'(');
            result+=string(s.size(),')');
            cout<<"YES"<<endl;
            cout<<result<<endl;
        } 
        else{
            string result;
            for(int i=0; i<s.size(); i++){
                result+="()";
            } 
            cout<<"YES"<<endl;
            cout<<result<<endl;
        }
    }
    return 0;
}
