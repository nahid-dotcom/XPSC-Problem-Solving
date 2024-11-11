#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int t;
     cin>>t;
     
     while(t--){
        long long int n,m,h;
        cin>>n>>m>>h;
        vector<long long int>car(n);
        vector<long long int>outlet(m);
        for(int i=0; i<n; i++){
            cin>>car[i];
        }
        for(int i=0; i<m; i++){
            cin>>outlet[i];
        }
     sort(car.begin(),car.end(),greater<int>());
     sort(outlet.begin(),outlet.end(),greater<int>());;
     long long int total=0;
     for(int i=0; i<min(n,m); i++){
        long long int ans=h*outlet[i];
        if(ans>=car[i]){
            total+=car[i];
        }
        else{
            total+=ans;
        }

     }
     cout<<total<<endl;

    }

    return 0;
}