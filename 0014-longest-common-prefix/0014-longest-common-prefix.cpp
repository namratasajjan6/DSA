class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();

        if(n==0) return"";

        sort(strs.begin(),strs.end());

        string start= strs[0];
        string end = strs[n-1];

        int len= min(start.size(),end.size());
        string ans ="";
        for(int i=0;i<len;i++){
            if(start[i] != end[i]) break;
            ans += start[i];
        }

        return ans;
    }
};