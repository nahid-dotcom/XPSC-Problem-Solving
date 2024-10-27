#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int i=1;
    int result=-1;
    while (c<=b){
        c=c*i;
        if(a<=c && c<=b){
            result=c;
            break;
        }
        i++;
    }
    cout<<result<<endl;
    
    return 0;
}