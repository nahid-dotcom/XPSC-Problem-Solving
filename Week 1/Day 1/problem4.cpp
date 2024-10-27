#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    if(s.size()==1){
        string s1="000"+s;
        cout<<s1<<endl;
    }
    else if(s.size()==2){
        string s1="00"+s;
        cout<<s1<<endl;
    }
    else if(s.size()==3){
        string s1="0"+s;
        cout<<s1<<endl;
    }
    else{
        cout<<s<<endl;
    }

    return 0;
}   