class Solution {
public:
    int fun(vector<int>& weights, int days,int mid){
        int count_days=1;
        int sum=0;
        // if 
        for(int i=0;i<weights.size();i++){
            if( sum + weights[i] <= mid ){
                sum += weights[i];
            }
            else{
                count_days++;
                sum=weights[i];
            }
        }
        
        if (count_days <= days) return true;
        return false ;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int max= *max_element(weights.begin(),weights.end());
        int sum = accumulate(weights.begin(), weights.end(), 0);
        int low=max;
        int high=sum;
        int ans=sum;

        while(low <= high){
            int mid = low+(high-low)/2;

            if(fun(weights,days,mid)){
                ans = mid;
                high=mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }
};