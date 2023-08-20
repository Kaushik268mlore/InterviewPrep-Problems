class Solution {
public:
    vector<vector<int>>res;
    void rec(vector<int>nums,vector<int>&temp,int target,int id){
        // if(id>=nums.size()||target<0)return;
        if(target==0){
            res.push_back(temp);
            return;
        }
        for(int i=id;i<nums.size();i++){
            if(i>id&&nums[i]==nums[i-1])continue;
            if(nums[i]>target)break;
            temp.push_back(nums[i]);
            rec(nums,temp,target-nums[i],i+1);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        rec(candidates,temp,target,0);
        return res;
    }
    
};
