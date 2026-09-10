class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n =nums.size();
        unordered_map<int,int> mpp;
        mpp.insert({0,1});
        int prefixSum=0;
        int count =0;
        for(int i=0;i<n;i++){
            prefixSum += nums[i];
            int rem = prefixSum - k;
            if(mpp.find(rem) != mpp.end()) {
                count += mpp[rem];
            }
            mpp[prefixSum]++;
        }
        return count;
    }
};