class Solution {
public:
    vector<string> res;
   vector<string> generateParenthesis(int n) {
       string s=""; 
       rec(s, n, 0);
        return res;
    }
    void rec(string str,int open, int close){
        if(open==0&&close==0) {
            res.push_back(str);
            return;
        }
        if(close>0){
            rec(str+")",open,close-1);
        }
        if(open>0){
            rec(str+"(",open-1,close+1);
        }
    }
    
  
};