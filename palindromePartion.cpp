class Solution {
    
    bool check(string& s,int start,int end){
        while(start<end){
            if(s[start++]!=s[end--])return false;
        }
        return true;
    }
    
    void rec(int in,vector<string>& ds,vector<vector<string>>& ans,string s){
        int n = s.length();
        if(in==n){
            ans.push_back(ds);
            return;
        }
        for(int i=in;i<n;i++){
        if(check(s,in,i)){
            ds.push_back(s.substr(in,i-in+1));
            rec(i+1,ds,ans,s);
            ds.pop_back();
        }
        }
    }
public:
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        rec(0,ds,ans,s);
        return ans;
    }
};