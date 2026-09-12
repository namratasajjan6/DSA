class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low=0;
        int high=nums.size()-1;

        while(low <= high){
            int mid=low+(high-low)/2;

            if (nums[mid] == target) return mid;
            //left half of the array is sorted
            if(nums[mid] >=nums[low]){
                if(nums[low] <= target && nums[mid] >= target){
                    high=mid-1;

                }
                else{
                    low=mid+1;
                }

            }
            //right half of the array is sorted
            else{
                if(nums[mid] <= target && nums[high] >= target){
                    low=mid+1;

                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;


    }
};