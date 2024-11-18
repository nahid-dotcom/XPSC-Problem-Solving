#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int first,second,destination=1;
        first=a-destination;
        second=abs(b-c);
        second+=abs(c-destination);
        if(first<second){
            cout<<"1"<<endl;
        }
        else if(second<first){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }

    }

    return 0;
}