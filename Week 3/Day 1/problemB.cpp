#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        deque<int> d(n);
        for(int i = 0; i < n; i++){
            cin >> d[i];
        }
        sort(d.begin(), d.end(),greater<int>());
        int dif1=d[0]-d[n-3];
        int dif2=d[2]-d[n-1];
        int dif3=d[1]-d[n-2];
        if(dif1<=dif2 && dif1<=dif3){
            d.pop_back();
            d.pop_back();
            int mx=d[0];
            int mn=d[d.size()-1];
            cout<<mx-mn<<endl;
        }
        else if(dif2<=dif1 && dif2<=dif3){
            d.pop_front();
            d.pop_front();
            int mx=d[0];
            int mn=d[d.size()-1];
            cout<<mx-mn<<endl;
            
        }
        else{
            d.pop_back();
            d.pop_front();
            int mx=d[0];
            int mn=d[d.size()-1];
            cout<<mx-mn<<endl;
        }

    }

    return 0;
}
