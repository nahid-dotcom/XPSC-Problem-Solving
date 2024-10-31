#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    vector<int>upper,lower;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='b'){
            if(!lower.empty()){
                lower.pop_back();
            }
                        
        }
        else if(s[i]=='B'){
            if(!upper.empty()){
                upper.pop_back(); 
            }
                       
        }
        else{
            if(s[i]>='a' && s[i]<='z'){
                lower.push_back(i);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                upper.push_back(i);
            }
        }
    }
    vector<int>result;
    for(auto it:upper){
        result.push_back(it);
    }
    for(auto it:lower){
        result.push_back(it);
    }
    sort(result.begin(),result.end());
    for(auto it:result){
        cout<<s[it];
    }
    cout<<endl;
    
    }

    return 0;
}