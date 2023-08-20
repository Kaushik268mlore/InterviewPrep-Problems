class Solution {
public:
    vector<vector<int>>sol;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sol.clear();
        vector<int>temp;
        solve(0,sol,candidates,temp,target);
        return sol;
    }
    void solve(int i,vector<vector<int>>&sol,vector<int>&arr,vector<int>&temp,int target){
        if(i==arr.size()||target<0){
            return;
        }
        
        if(target==0){
            sol.push_back(temp);
            return;
        }
        solve(i+1,sol,arr,temp,target);
        temp.push_back(arr[i]);//including the element
        solve(i,sol,arr,temp,target-arr[i]); 
        temp.pop_back();//excluding the element.
    }
};