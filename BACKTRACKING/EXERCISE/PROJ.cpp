#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // int k;cin>>k;
    vector<vector<int>>arr={{1, 5, 9},
{-1, 3, 7},
{2, 4, 8}};
int minn=INT_MAX;
int maxx=INT_MIN;
    for(int i=0;i<arr.size();i++){
        minn=min(minn,arr[i][0]);   
        maxx=max(maxx,arr[i][0]);
    }
    cout<<"The range would be ["<<minn<<" ,"<<maxx<<"]"<<endl;
    return 0;
}