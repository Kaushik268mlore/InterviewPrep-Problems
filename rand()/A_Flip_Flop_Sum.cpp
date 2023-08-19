#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int prev;
        cin>>prev;
        int tot=prev;
        int pos=0,neg=0,med=0;
        for(int i=0;i<n-1;i++){
            int k;
            cin>>k;
            tot+=k;
            if(prev==1&&k==1)pos++;
            if(prev==-1&&k==-1)neg++;
            if(prev==1&&k==-1||(prev==-1&&k==1))med++;
            prev=k;
        }
    if(neg>0){
        cout<<tot+4<<endl;
        // break;
    }
    else if (med>0){
        cout<<tot<<endl;
        // break;
    }
    else if(pos>0){
        cout<<tot-4<<endl;
        // break;
    }
    }
    
}