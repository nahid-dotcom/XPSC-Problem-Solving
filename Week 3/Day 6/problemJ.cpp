#include <bits/stdc++.h>
using namespace std;

int arr[205][205];
int n, m;
vector<pair<int,int>>d = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int dfs(int si,int sj) {
    int sum=arr[si][sj];  
    for (int i=0; i<4; i++) {
        int ci=si + d[i].first;
        int cj=sj + d[i].second;
        while (valid(ci,cj)) {
            sum+=arr[ci][cj];
            ci+=d[i].first;
            cj+=d[i].second;
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin>>arr[i][j];
            }
        }
        long long int mx = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                long long int sum=dfs(i,j);
                mx=max(mx,sum);
            }
        }
        cout<<mx<< endl;
    }

    return 0;
}
