#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin>>x>>y>>z;
    int ans=x+y+z;
    int remain=4-ans;
    float a=y/2;
    float first=x+a+remain;
    float second=z+a;
    if(first>second){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}