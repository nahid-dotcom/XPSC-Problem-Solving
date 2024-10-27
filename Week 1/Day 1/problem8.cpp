#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long int pre[n];
    pre[0]=arr[0];
    for(int i=1; i<n; i++){
        pre[i]=pre[i-1]+arr[i];
    }
    long long int result=pre[n-1];
    if(result%2==0){
        cout<<result<<endl;
    }
    else{
        long long int mn=INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                if(mn>arr[i]){
                    mn=arr[i];
                }
            }
        }
        result=result-mn;
        cout<<result<<endl;
    }
    return 0;
}