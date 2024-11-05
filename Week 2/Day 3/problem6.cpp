#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        set<int>s;
        for (int i = 0; i<n; i++) {
            cin>>v[i];
            s.insert(v[i]);
        }
        int l=0, r=n-1;
        while (l+1<r) {
            int mn = *s.begin(), mx = *s.rbegin();
            if (v[l]!=mn && v[l]!=mx && v[r]!= mn && v[r] !=mx) {
                break;
            }
            if (v[l]==mn || v[l]== mx) {
                s.erase(v[l]);
                l++;
            }
            if (v[r]==mn || v[r]==mx) {
                s.erase(v[r]);
                r--;
            }
        }

        if (l+1<r) {
            cout<<l+1<<" "<<r+1<<endl;
        } else {
            cout <<"-1"<< endl;
        }
    }

    return 0;
}
