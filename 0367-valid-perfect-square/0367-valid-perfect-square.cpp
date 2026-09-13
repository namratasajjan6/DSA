class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int low=1;
        int high=num;
        bool ans=false;

        while(low<=high){

            int mid= low+(high-low)/2;

            long long  cal=1LL*mid*mid;

            if(cal == num) {

                ans = true;
            }
            if(cal < num){

                low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
        if(ans){
            return true;
        }
        else{
            return false;
        }
    }
};