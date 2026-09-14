class Solution {
public:

    bool fun(vector<int>& bloomDay, int m, int k,int mid){
        int count=0;
        int no_of_boque=0;

        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= mid){
                count++;

            }
            else{
                no_of_boque += count/k;
                count=0;
            }
        }
        no_of_boque += count/k;
        if(no_of_boque >= m) return true;
        return false;

        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        int min= *min_element(bloomDay.begin(),bloomDay.end());
        int max= *max_element(bloomDay.begin(),bloomDay.end());
        if( (long long )m*k > bloomDay.size()) return -1;
        int low=min;
        int high=max;
        int ans=max;

        while(low<=high){

            int mid= low+(high-low)/2;

            if(fun(bloomDay,m,k,mid)){
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