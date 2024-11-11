#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char m,n;
        m=a.back();
        n=b.back();
        int szM=a.size();
        int szN=b.size();
        if(m==n && szM==szN){
            cout<<"="<<endl;
        }
        else if(m=='S' && n=='S' && szM!=szN){
            if(szM>szN){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
        else if(m==n && szM!=szN){
            if(szM>szN){
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
        else if(m=='S' && (n=='L' || n=='M' || n=='X')){
            cout<<"<"<<endl;
        }
        else if((m=='L' || m=='M' || m=='X') && n=='S'){
            cout<<">"<<endl;
        }
        else if(m=='M' && (n=='L' || n=='X')){
            cout<<"<"<<endl;
        }
        else if((m=='L' || m=='X') && n=='M'){
            cout<<">"<<endl;
        }
        else if(m=='L' && n=='X'){
            cout<<"<"<<endl;
        }
        else if(m=='X' && n=='L'){
            cout<<">"<<endl;
        }
    }

    return 0;
}