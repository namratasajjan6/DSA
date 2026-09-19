class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int end=-1;

        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2 == 1) {
                end=i;
                break;
            }
        }
        if(end == -1) return"";
        return num.substr(0,end+1);
    }
};