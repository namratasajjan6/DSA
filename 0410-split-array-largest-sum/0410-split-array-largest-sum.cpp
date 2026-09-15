class Solution {
public:
    int fun(vector<int>& nums, int k,int mid){

        int subarray=1;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            if(sum + nums[i] <= mid){
                sum += nums[i];
            }
            else{
                subarray++;
                sum= nums[i];
            }
        }
        if(subarray <= k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum= accumulate(nums.begin(),nums.end(),0);
        int max=*max_element(nums.begin(),nums.end());
        
        int low=max;
        int high=sum;
        int ans=sum;

        while(low<=high){
            int mid=low +(high-low)/2;

            if(fun(nums,k,mid) == true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
            
        }
        return ans;
    }
};