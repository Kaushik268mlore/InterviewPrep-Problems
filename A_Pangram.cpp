#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        if(n<26){cout<<"NO\n"0;return 0;}
        //bool flag=true;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        set<char>set(s.begin(),s.end());
        if(set.size()==26)cout<<"YES\n";
        else cout<<"NO\n";
       
    }
}