class Solution {
public:
    int reverse(int x) {
        if(INT_MIN == x) return 0;
        if(x < 0) return -reverse(-x);
        int result = 0;
        while(x > 0){
            int a = x % 10;
            // result*10 + a can overflow. it means that result*10 + a > INT_MAX
            // so we will check beforehand, if(result > (INT_MAX-a)/10)
            if(result > (INT_MAX - a) / 10)
              return 0;
            result = result * 10 + a;
             x = x / 10;
        }
        return result;
    }
};
