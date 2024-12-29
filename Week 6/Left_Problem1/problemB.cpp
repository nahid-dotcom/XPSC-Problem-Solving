#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=(b+1)/2;
        if(a==0 && b==0){
            cout<<"0"<<endl;
        }
        else{
            int total=15*x;
            int rest=total-(b*4);
            int screen=0;
            if(rest>=a){
                screen=x;
            }
            else{
                a=a-rest;
                int y=(a+14)/15;
                screen=x+y;
            }
            cout<<screen<<endl;
        }
    }
    return 0;
}
