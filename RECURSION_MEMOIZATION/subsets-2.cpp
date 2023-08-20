class Solution {
public:
    void subs(vector<int>nums,int n,int i, set<vector<int>>&res,vector<int>&d){
        if(i>=n){res.insert(d);return ;}
        d.push_back(nums[i]);
        subs(nums,n,i+1,res,d);
        d.pop_back();
        subs(nums,n,i+1,res,d);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        // s.insert({});
        vector<int>d;
        int n=nums.size();
        subs(nums,n,0,s,d);
        vector<vector<int>>res(s.begin(),s.end());
        // for(auto v:s)res.push_back(v);
        // res.push_back({});
        return res;
    }
};