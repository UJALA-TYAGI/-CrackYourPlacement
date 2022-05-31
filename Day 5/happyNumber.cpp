class Solution {
public:
    bool isHappy(int n) {
        
        int num = 0;

        if (n == 1 || n== 7) return true;

        else if (n < 10) return false;

        while (n != 0) {

            num += pow(n%10,2);

            n = n/10;
        }

        return isHappy(num);
    }
};
