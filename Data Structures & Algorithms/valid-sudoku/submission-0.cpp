class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      
     // unordered_map<int, int> mp;
      for (int i=0; i<9; i++){
         set<char> row ;
        for (int j =0; j< 9; j++){  
             if (board[i][j] == '.')   continue;   
             if (row.count(board[i][j])) {
                return false;
            }
 
            row.insert(board[i][j]); 
        }
        
      }

         for (int i=0; i<9; i++){
         set<char> column ;
        for (int j =0; j< 9; j++){  
            if (board[j][i] == '.')   continue; 
            if (column.count(board[j][i])) {
                return false;
            }

            column.insert(board[j][i]);

        }
        
      }
for (int row = 0; row < 9; row += 3)
{
    
    for (int col = 0; col < 9; col += 3){
set<char>column;
   for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
         if (board[row+i][col+j] == '.')   continue; 
            if (column.count(board[row+i][col+j])) {
                return false;
            }

            column.insert(board[row+i][col+j]);

    }
}
}}

     
      return true;

    }
};
