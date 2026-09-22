class Solution {
public:
    int myAtoi(string s) {

        // skip leading space 
        int i=0;
        while(i<s.size() && s[i] == ' ') i++;

        // sign 
        int sign =1;
        if(i < s.size() && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if (i <s.size() && s[i] == '+') {
            i++;
        }

        //ans 

        int  num=0;
        while(i<s.size() && isdigit(s[i])){
            int digit=s[i]-'0';

            if(num > INT_MAX/10 || (num == INT_MAX/10 && digit > INT_MAX%10)) {
                if(sign == -1) return INT_MIN;
                else if (sign == 1) return INT_MAX;
            }
            num = num*10 + digit;
            i++;
        }
        return num*sign;
    }
};