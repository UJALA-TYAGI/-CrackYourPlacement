class Solution {
public:
    int kthFactor(int n, int k) {
        
        if(k==1) return 1;
        
        int ans = -1;
        k = k-1;
        for(int i =2; i<=n/2 && k>0; i++){
            
            if (n%i==0){
                k--;
            }
            
            if(k==0){
                ans = i;
            }
            
        }
        
        if(k==1) ans = n;
        
        return ans;
        
    }
};
