class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int index){
        if(word.size()==index){
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()){
            return false;
        }
        bool ans=false;
        if(board[i][j]==word[index]){
            char temp = board[i][j];
            board[i][j]='0';
             ans = ans|| dfs(board,word,i+1,j,index+1); 
             ans = ans|| dfs(board,word,i-1,j,index+1); 
             ans = ans|| dfs(board,word,i,j+1,index+1); 
             ans = ans|| dfs(board,word,i,j-1,index+1);
            board[i][j]=temp;
        }
        return ans;
    
    }

    bool exist(vector<vector<char>>& board, string word) {

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    bool res = dfs(board,word,i,j,0);
                    if(res==true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
