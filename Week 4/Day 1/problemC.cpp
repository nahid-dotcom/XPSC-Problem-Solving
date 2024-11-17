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
        char last=s.back();
        if(last=='0'){
            s.push_back('1');
        }
        else if(last=='1'){
            s.push_back('0');
        }
        int one=0,zero=0;
        deque<int>a,b;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                a.push_back(1);
                if(!b.empty()){
                    zero++;
                    b.clear();

                }
            }
            else if(s[i]=='0'){
                b.push_back(0);
                if(!a.empty()){
                    one++;
                    a.clear();
                }
            }

        
        }
        if(one<=zero){
            cout<<one<<endl;
        }
        else{
            cout<<zero<<endl;
        }
    }

    return 0;
}