class Solution {
public:
    void solveSudoku(vector<vector<char>>& board){
        solve(board);
    }
    bool solve(vector<vector<char>>& board) {//this function updates the sudoku matrix
        int n=board[0].size();//finds the  nxn size 
        for(int i=0;i<n;i++){//traversing throughout the matrix
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){//if empty spot detected
                    for(char c='1';c<='9';c++){//try all the possibilities at that spot
                        if(safe(board,i,j,c)){//if c is the unique element update the matrix
                            board[i][j]=c;
                            if(solve(board)==true)return true;//then we call another recursive call over the updated matrix
                            else board[i][j]='.';//backtrack and update it to the . (char) so that we try next value of (char) c
                        }
                    }
               return false; }// we still didnt find a solution then return false as the solution doesnt exist
            }
        }
        return true;//whilst if we didnt backtrack at the previous step , we return true ..
    }
    bool safe(vector<vector<char>>&b,int i,int j,char no){
        for(char k=0;k<9;k++){
            if(b[k][j]==no||b[i][k]==no)return false;//checks rows and columns
        }
        int sx=(i/3)*3;//used to check the sub-matrix 
        int sy=(j/3)*3;
        for(int l=sx;l<sx+3;l++){
            for(int m=sy;m<sy+3;m++){
                if(b[l][m]==no)return false;
            }
        }
        return true;
    }
};  