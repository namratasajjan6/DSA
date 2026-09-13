class Solution {
public:
    long long fun(vector<int>& piles,int mid, int h){
        long long hours=0;
        for (int i=0;i<piles.size();i++){
            hours += ceil((double)piles[i] / mid);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int max= *max_element(piles.begin(),piles.end());

        int low=1;
        int high = max;

        int ans = max;
        while(low<=high){
            int mid = low +(high-low)/2;
            long long hours=fun(piles,mid,h);
            if(hours <= h ){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
};