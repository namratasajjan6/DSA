class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;
        int longest = 0;

        for(int i =0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it-1) == st.end() ){

                int ele =it;
                int cnt =1;

                while(st.find(ele + 1) != st.end()){
                    cnt ++;
                    ele++;
                }

                longest = max(longest,cnt);
            }
        }
        return longest;    
    }
};