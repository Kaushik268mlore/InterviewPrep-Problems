/*class Solution {
public:
    map<char,string>keymap;
    keymap['2']="abc";
    keymap['3']="def";
    keymap['4']="ghi";
    keymap['5']="jkl";
    keymap['6']="mno";
    keymap['7']="pqrs";
    keymap['8']="tuv";
    keymap['9']="wxyz";
    vector<string> letterCombinations(string digits) {
        for(int i=0;i<digits.length();i++){
            char c= digits[i];
            vector<char>chars=m[c];
            vector<string>tmpans;
            vector<string>tmp=ans;
            for(auto el:chars){
                if(i==0){
                    string s="";
                    s+=el;
                    ans.push_back(s);
                }
                else{
                    for(auto str:tmp)tmpans.push_back(str+el);
                    ans=tmpans;
                }
            }
        }
        return ans;
    }
};*/
class Solution {
public:
//     vector<string> letterCombinations(string digits) {
//         map<char,vector<char>> m;
//         m['2'] = {'a','b','c'};
//         m['3'] = {'d','e','f'};
//         m['4'] = {'g','h','i'};
//         m['5'] = {'j','k','l'};
//         m['6'] = {'m','n','o'};
//         m['7'] = {'p','q','r','s'};
//         m['8'] = {'t','u','v'};
//         m['9'] = {'w','x','y','z'};
        
//         vector<string> ans;
//         int len = digits.size();
        
//         for(int i = 0; i<len; i++){
//             char c = digits[i];
//             vector<char> chars = m[c];
            
//             vector<string> tmpAns;
//             vector<string> tmp = ans;
            
//             for(auto el : chars) {
//                 if(i==0){
//                     string s = "";
//                     s += el;
//                     ans.push_back(s);
//                 }else {
//                     for(auto str : tmp) tmpAns.push_back(str+el);
//                     ans = tmpAns;
//                 }
//             }
            
//         }
//         return ans;
//     }
//     gotta try the recursion solution out again!
    map<char,vector<char>> m;
    vector<string>res;
    void rec(string digits,int start,int end,string curr){
        if(start==end){
            res.push_back(curr);
            // return;
        }
        char id=digits[start];
        for(int i=0;i<m[id].size();i++){
            rec(digits,start+1,end,curr+m[id][i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return res;
        m['2'] = {'a','b','c'};
        m['3'] = {'d','e','f'};
        m['4'] = {'g','h','i'};
        m['5'] = {'j','k','l'};
        m['6'] = {'m','n','o'};
        m['7'] = {'p','q','r','s'};
        m['8'] = {'t','u','v'};
        m['9'] = {'w','x','y','z'};
        rec(digits,0,digits.length(),"");
        return res;
    }
};