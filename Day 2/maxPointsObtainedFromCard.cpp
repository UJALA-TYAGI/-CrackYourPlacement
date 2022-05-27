class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

         int points = 0;
//         int i = 0, j= cardPoints.size()-1;        
//         while(k!=0 && i<=j){

//                 int left = i;
//                 int right = j;
//                 int leftsum=0, rightsum=0;
//                 int l = k;
//                 while(left<right && l>0){
//                     leftsum+=cardPoints[left++];
//                     rightsum+=cardPoints[right--];
//                     l--;
//                 }
                
//                 if (leftsum>rightsum) {
//                     points += cardPoints[i];
//                     i++;
//                 }
//                 else{
//                     points+=cardPoints[j];
//                     j--;
//                 }
            
//             k--;
//         }
        
        int sum=0;
       for(int i=0;i<k;i++){
           sum+=cardPoints[i];  //sum of first k elements from left
           points=sum;
       }
        
        for(int i=k-1, j=cardPoints.size()-1;i>=0;i--,j--){
            
            // include from last k elements && exclude from first k 
            // and at each step check for max sum
            sum+=cardPoints[j]-cardPoints[i]; 
            points=max(points,sum);
        }

        
        return points;
    }
};
