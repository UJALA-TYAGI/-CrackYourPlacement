class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }

//      Method 1     
//         while(n!=1){
//             if (n%2!=0){
//                 return false;
//             }
//             n/=2;
//         }
//         return true;
//     }
        
//      Method 2
//         n = n - (n&(-n));
//         if (n==0) return true;
        
//         return false;
//     }
        
//  Method 2 explaination:   lets denote 2 , 4, 64 in binary
//      ( 64 32 16 8 4 2 1 )  this is what set bit in binary represents 
//    2 = 0  0	 0  0 0 1 0
//    4 = 0  0  0  0 1 0 0
//   64 = 1  0  0  0 0 0 0  
  
//   so in case a no is power of two then the only one bit must be set in its binary representation. 
//   -> remove the last set bit
//   -> look if no becomes zero
//   -> if zero then it must be having only one set bit ie - it must have been the power of 2

// recap :   x&(-x) : tells the last set bit
// 	  : x  = x - x&-x removes the last set bit
        
        
        
//      Method 3 
        if((n&(n-1))==0) return true; 
        return false;
        
//     Just a binary trick: Method 3 explaination 

// 2^n = 1{000...0 - n times}, binary.
// 2^2 = 4 (decimial) = 100 binary - two zeros.
// 2^5 = 32 (decimial) = 100000 binary - five zeros.

// 2^n - 1 = {111...1 - n times}
// 2^3 - 1 = 8 - 1 = 7 (decimial) = 111 = three ones.
// 2^5 - 1 = 32 - 1 = 31 (decimial) = 11111 = five ones.

// Based on this two rules, if n is power of two (2^n) if we apply bitwise AND all corresponding bits will be different and we'll receive zero, for example:

// 1) n = 2^5
// 32 & (32 - 1) = 32 & 31:

// -- 100000
// --- 11111
// --- 00000 == 0
        
    }
};
