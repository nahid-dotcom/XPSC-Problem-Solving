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
        char c;
        cin>>c;
        string s;
        cin>>s;
        string s1=s+s;
        int a=s.find_first_of(c);
        int cnt=0,result=0;
        bool flag=false;
        if(c=='g'){
            cout<<"0"<<endl;
        }
        else{
             for(int i=a; i<s1.size(); i++){
                if(s1[i]=='g'){
                    result=max(cnt,result);
                    flag=false;
                }
                if(s1[i]==c && !flag){
                    flag=true;
                    cnt=0;
                }
                if(flag){
                    cnt++;
                }
            }
           cout<<result<<endl; 
     }
    
    }

    return 0;
}