// { Driver Code Starts
// Initial Template for C

// Program to count islands in boolean 2D matrix
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define COL 501


 // } Driver Code Ends
// User function Template for C

    void numsIslandsUtil(int grid[][COL], int n, int m, int i, int j)
    {
        if (i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)
            return;
        
        grid[i][j] =0;
        numsIslandsUtil(grid, n, m,i-1,j);
        numsIslandsUtil(grid, n, m,i,j+1);
        numsIslandsUtil(grid, n, m,i+1,j);
        numsIslandsUtil(grid, n, m,i,j-1);
        numsIslandsUtil(grid, n, m,i+1,j-1);
        numsIslandsUtil(grid, n, m,i-1,j+1);
        numsIslandsUtil(grid, n, m,i-1,j-1);
        numsIslandsUtil(grid, n, m,i+1,j+1);
    }
    
int countIslands(int grid[][COL], int n, int m) {
    // your code goes here
        int cnt=0;
        
        for (int i =0; i<n; i++){
            for (int j =0; j<m; j++){
                
                if(grid[i][j]==1){
                    numsIslandsUtil(grid, n, m,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
}


// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int n, m;
        scanf("%d %d", &n, &m);

        int M[n][COL];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &M[i][j]);
            }
        }

        int ans = countIslands(M, n, m);
        printf("%d\n", ans);
    }

    return 0;
}
  // } Driver Code Ends
