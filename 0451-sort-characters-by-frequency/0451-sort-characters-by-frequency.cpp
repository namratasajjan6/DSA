class Solution {
public:
    string frequencySort(string s) {
        int freq[256];

        for(char ch : s){
            freq[ch]++;
        }

        string ans;

        while(ans.size() < s.size()) {
            int maxFreq = 0;
            int maxChar = 0;
           
            for(int i = 0; i < 256; i++) {
                if(freq[i] > maxFreq) {
                    maxFreq = freq[i];
                    maxChar = i;
                }
            }

            
            for(int i = 0; i < maxFreq; i++) {
                ans += char(maxChar);
            }

           
            freq[maxChar] = 0;
        }

        return ans;
    }
};