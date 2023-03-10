#include<bits/stdc++.h>
using namespace std;
//https://codedrills.io/problems/nth-fibonacci-number
int32_t main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n+1);
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
            //cout<<arr[i]<<endl;
        }
        cout<<arr[n];
    }
}