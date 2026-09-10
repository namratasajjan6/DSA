class Solution {
public:
    vector<int> generateRow(int rows){
        vector<int> ansRow;
        ansRow.push_back(1);
        long long ans=1;
        for(int i=1;i<rows;i++){
            ans *= (rows-i);
            ans = ans /i;
            ansRow.push_back(ans);

        }
        return ansRow;

    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>  ans;
        for(int i=1;i<=numRows;i++){
            vector<int> temp=generateRow(i);
            ans.push_back(temp);
        }
        return ans;
    }
};