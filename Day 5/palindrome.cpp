class Solution {
public:
    bool isPalindrome(int x) {
         if (x<0)
            return false;
        long n = x, num=0;
        while(x!=0){
            int r = x%10;
            num = num*10+r;
            x /=10;
        }
        if (num==n)
            return true;
        else
            return false;
    }
};
