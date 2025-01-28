#include <bits/stdc++.h>
using namespace std;
const int N=(1<<15);
vector<int>Palindrome;

bool isPalindrome(int x){
    string s=to_string(x);
    string t=s;
    reverse(t.begin(),t.end());
    return t==s;
}

void makePalindrome(){
    for(int i=0; i<N; i++){
        if(isPalindrome(i)){
            Palindrome.push_back(i);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    makePalindrome();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),cnt(N+1);
        for(int i=0; i<n; i++){
            cin>>v[i];
            cnt[v[i]]++;
        }
        long long ans=n;
        for(int i=0; i<n; i++){
            for(int j=0; j<Palindrome.size(); j++){
                int cur=(v[i]^Palindrome[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<<endl;


    }

    return 0;
}
