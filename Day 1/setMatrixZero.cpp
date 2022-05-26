class Solution {
public:
    
//     void dfs(vector<vector<int>>& matrix,vector<vector<int>>& visited, int n, int m, int i, int j){
//         if(i>=n || j>=m || i<0 || j<0 || visited[i][j]==1){
//             return;
//         }
            

        
//         matrix[i][j]=0;
//         visited[i][j]=1;

//         dfs(matrix,visited, n,m,i+1,j);
//         dfs(matrix, visited,n,m,i,j+1);
//         dfs(matrix, visited,n,m,i-1,j);
//         dfs(matrix,visited,n,m,i,j-1);
        
//     }
    
    void setZeroes(vector<vector<int>>& m) {
        // int n = matrix.size();
        // int m = matrix[0].size();
//         vector<vector<int>> visited(n, vector<int> (m, 0));
        
        
//         for(int i =0;i<n; i++){
//             for(int j = 0; j<m; j++){
//                 if(matrix[i][j]==0 && visited[i][j]==0){
//                     dfs(matrix,visited,n,m,i,j);
//                 }
//             }
//         }
        
        vector<int> r(m.size(),0);
        vector<int> c(m[0].size(),0);
        for (int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        for (int i=0;i<m.size();i++){
              for(int j=0;j<m[0].size();j++){
                if(r[i]==1 ||c[j]==1) m[i][j]=0;
             }
        }
        
        
    }
};
