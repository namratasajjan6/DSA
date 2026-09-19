class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string doubleString =s+s;

        for(int i=0;i<s.size();i++){
            int j=0;
            while(j<s.size()&& doubleString[j+i] == goal[j]) j++;
            if(j == s.size()) return true;
        }
        return false;

    }
};