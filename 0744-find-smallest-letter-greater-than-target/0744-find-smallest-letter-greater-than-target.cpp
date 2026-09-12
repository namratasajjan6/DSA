class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();

        int high=n-1;
        int low=0;
        

        while(low <= high){
            int mid = low +(high-low)/2;
            if (letters[mid] > target){
                
                high=mid-1;
            }
            else low=mid+1;
            
        }
        return letters[low % letters.size()];
    }
};