#include<bits/stdc++.h>
#include<math.h>
#include<math.h>
using namespace std;

int32_t main(){
    int t=1;
    //cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n==0){cout<<1<<endl;return 0;}
        n%=4;
        if(n==0){cout<<6<<endl;return 0;}
        int last=pow(8,n);
        //cout<<last<<" ";
        cout<<last%10;           
    }
}