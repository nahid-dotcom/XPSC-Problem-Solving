#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    deque<int> dq(n);
    for(int i=0; i<n; i++){
        cin>>dq[i];
    }
    int sereja=0,dima=0;
    while(!dq.empty()){
        if(dq.front()>dq.back()){
            sereja+=dq.front();
            dq.pop_front();
        }
        else{
            sereja+=dq.back();
            dq.pop_back();
        }
        if(!dq.empty()){
            if(dq.front()>dq.back()){
                dima+=dq.front();
                dq.pop_front();
            }
            else{
                dima+=dq.back();
                dq.pop_back();
            }
        }
    }
    cout<<sereja<<" "<<dima<<'\n';

    return 0;
}