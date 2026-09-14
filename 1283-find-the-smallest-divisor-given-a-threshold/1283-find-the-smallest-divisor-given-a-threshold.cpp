class Solution {
public:
    int fun(vector<int>& nums, int threshold,int mid){
        long long sum =0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i]/mid);
        }
        if(sum <= threshold) return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int max=*max_element(nums.begin(),nums.end()) ;;
        int low=1 ;
        int high=max;
        int ans =max;


        while(low <= high){
            int mid= low +(high-low)/2;

            if(fun(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};