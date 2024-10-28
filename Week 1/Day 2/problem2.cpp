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
    char ch[n];
    for(int i=0; i<n; i++){
        cin>>ch[i];
    }
    int indx1=-1,indx2=-1;
    for(int i=0; i<n; i++){
        if(ch[i]=='B'){
            if(indx1==-1){
                indx1=i;
            }
            indx2=i;
        }
    }

    int result=(indx2-indx1)+1;
    cout<<result<<'\n';

    }
    return 0;
}