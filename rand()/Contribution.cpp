#include <stdio.h>
#include<bits/stdc++.h>
// #include <sstream>
#include <iostream>
using namespace std;
 
#define ld long double
#define ll long long int 
const int MOD = 1e9+7;


void solve()
{   
    string a,b;
    cin>>a>>b;
    unordered_map<int,int>m;
    m[1]=1;
    m[3]=4;
    m[5]=6;
    m[7]=9;
    int tot=0;
    for(char c:a){
        c-='0';
        tot+=(m[c]);
    }
    for(char c:b){
        c-='0';
        tot-=(m[c]);
    }
   cout<<tot<<endl;
}   





int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sample_sample=1;
    cin>>sample_sample; 
  

    
    for(int i=1;i<=sample_sample;i++)
    {    
        solve();
       
    }
    
    return 0;

}