class Solution {
public:
//     a nice recursive solution
    vector<string>res;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>set(wordDict.begin(),wordDict.end());
        string curr="";
        helper(s,0,set,curr);
        return res;
    }
    void helper(string s,int start,unordered_set<string>set,string curr){
        if(start>=s.length()){
            curr.pop_back();
            res.push_back(curr);
        }
        string str="";
        for(int i=start;i<s.length();i++){
            str.push_back(s[i]);
            if(set.count(str)){
                helper(s,i+1,set,curr+str+" ");
            }
        }
    }
};