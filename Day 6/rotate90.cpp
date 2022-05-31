class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
// first take the transpose then reversed each row;
        // int n = matrix.size();
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //       swap(matrix[i][j], matrix[j][i]);
               // swap(matrix[j][i], matrix[i][j]);
        //         //both will give transpose
        //     }
        // }
        
//         for (int i = 0; i<n; i++){
//             int left = 0; int right = n-1;
            
//             while(left<right){
//                 swap(matrix[i][left++], matrix[i][right--]);
//             }
//         }

        
        int n = matrix.size();
        
        for(int row = 0; row < n/2; row++)
            for(int col = row; col < n - row - 1; col++)
            {                
                swap(matrix[row][col], matrix[col][n - row -1]);
                swap(matrix[row][col], matrix[n - row - 1][n - col -1]);
                swap(matrix[row][col], matrix[n -col -1][row]);
            }
        
    }
};
