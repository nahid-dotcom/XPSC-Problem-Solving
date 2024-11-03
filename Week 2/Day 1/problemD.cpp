#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string name="Timur";
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==5){
            sort(name.begin(),name.end());
            sort(s.begin(),s.end());
            if(s==name){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}