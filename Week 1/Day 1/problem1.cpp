#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int result=0;
    if(a<=b){
        result=(b-a)+1;
    }
    else{
        result=0;
    }
    cout<<result<<endl;

    return 0;
}