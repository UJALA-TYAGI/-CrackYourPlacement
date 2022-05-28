class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n = board.size(), m = board[0].size();
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                int cnt = 0;
                
                if(i>0 && board[i-1][j]>=1) cnt++;
                if(i<n-1 && board[i+1][j]>=1) cnt++; 
                if(j>0 && board[i][j-1]>=1) cnt++; 
                if(j<m-1 && board[i][j+1]>=1) cnt++;
                
                if(i>0 && j>0 && board[i-1][j-1]>=1) cnt++; 
                if(i>0 && j<m-1 && board[i-1][j+1]>=1) cnt++; 
                if(i<n-1 && j>0 && board[i+1][j-1]>=1) cnt++; 
                if(i<n-1 && j<m-1 && board[i+1][j+1]>=1) cnt++; 
                
                if(board[i][j]==1 && (cnt<2 || cnt>3)) 
                    board[i][j]=2;
                
                if(board[i][j]==0 && cnt==3) 
                    board[i][j]=-1;
            }
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                if(board[i][j]==2) 
                    board[i][j]=0;
                if(board[i][j]==-1) 
                    board[i][j]=1;
            }
            
        return;
        
//         int rows = board.size();
//         int cols = board[0].size();
        
//         vector<vector<int>> neighbors = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        
//         // If a cell is '1'
//         // ========================
//         // neighbors   < 2, it dies
//         // neighbors [2,3], it lives
//         // neighbors   > 3, it dies
        
//         // If a cell is '0'
//         // ========================
//         // neighbors   = 3, it becomes '1
        
        
//         // Hack: To avoid extra space.
//         // 0 ===> 0 in both original & new matrix
//         // 1 ===> 1 in both original & new matrix
//         // 2 ===> 0 in original matrix, 1 in new matrix
//         // 3 ===> 1 in original matrix, 0 in new matrix
        
//         for (int r=0; r<rows; r++)
//         {
//             for (int c=0; c<cols; c++)
//             {
//                 int live = 0;                
//                 for(vector<int> n: neighbors)
//                 {
//                     int rr = r+n[0];
//                     int cc = c+n[1];
//                     if (rr >= 0 && rr < rows && cc >=0 && cc < cols)
//                         live += (board[rr][cc] == 1 || board[rr][cc] == 3)? 1: 0;
//                 }
//                 if (board[r][c] == 0 && live == 3)
//                     board[r][c] = 2;
//                 else if (board[r][c] == 1)
//                     board[r][c] = (live < 2 || live > 3)? 3: 1;
//             }
//         }
        
//         for (int r=0; r<rows; r++)
//         {
//             for (int c=0; c<cols; c++)
//             {
//                 if (board[r][c] == 2)
//                     board[r][c] = 1;
//                 if (board[r][c] == 3)
//                     board[r][c] = 0;
//             }
//         }
    }
};
