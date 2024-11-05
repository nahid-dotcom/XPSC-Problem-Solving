#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    int idx=1;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>v;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int money;
            cin>>money;
            s.insert({idx,money});
            ms.insert({money,-idx});
            idx++;
        }
        else if(type==2){
            int pos,money;
            pos=s.begin()->first;
            money=s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ms.erase({money,-pos});
        }
        else if(type==3){
            int pos,money;
            money=ms.rbegin()->first;
            pos=-ms.rbegin()->second;
            v.push_back(pos);
            s.erase({pos,money});
            ms.erase(--ms.end());

        }
        
    }
    for(auto value:v){
        cout<<value<<" ";
    }    
    cout<<endl;

    return 0;
}