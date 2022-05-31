// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<char>>& board,int x,int y){
        if(x<0 || y<0 || x>=board.size() || y>=board[0].size() || board[x][y]!='O')
            return ;
        
        board[x][y]='Z';
        dfs(board,x-1,y);
        dfs(board,x+1,y);
        dfs(board,x,y-1);
        dfs(board,x,y+1);
        
    }

   

      
    vector<vector<char>> fill(int n, int m, vector<vector<char>> board)
    {
        // code here
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j ==0 || i==n-1 || j==m-1) && (board[i][j]=='O'))
                    dfs(board,i,j);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='Z')
                    board[i][j]='O';
                else if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        return board;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends
