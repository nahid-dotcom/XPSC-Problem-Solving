#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int com1=a+b;
    int com2=(a-1)+(b-1);
    int com3=a+(a-1);
    int com4=b+(b-1);
    int mn=max(com1,com2);
    mn=max(mn,com3);
    mn=max(mn,com4);
    cout<<mn<<endl;

    return 0;
}   