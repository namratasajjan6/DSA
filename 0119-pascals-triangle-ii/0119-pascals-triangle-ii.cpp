class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long val=1;
        ans.push_back(1);
        for(int i=1;i<=rowIndex;i++){
            val *= (rowIndex+1-i);
            val /= i;
            ans.push_back(val);
        }
        return ans ;

    }
};