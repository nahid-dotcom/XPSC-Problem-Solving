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
        if(n%2!=0) cout<<"NO"<<endl;
        else{
            string s;
            for(int i=0; i<n/2; i++){
                if(i%2==0){
                    s.push_back('A');
                    s.push_back('A');
                }
                else{
                    s.push_back('N');
                    s.push_back('N');
                }
            }
            cout<<"YES"<<endl<<s<<endl;
        }
    }

    return 0;
}