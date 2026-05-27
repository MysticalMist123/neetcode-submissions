class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       for(int i=0;i<9;i++){
            unordered_map<int,int> row;
            for(int j=0;j<9;j++){
                int num = board[i][j] - '0';
                if(num!='.'-'0'){
                    if(row[num]) return false;
                    row[num]++;
                }
            }
       }
       for(int j=0;j<9;j++){
            unordered_map<int,int> col;
            for(int i=0;i<9;i++){
                int num = board[i][j] - '0';
                if(num!='.'-'0'){
                    if(col[num]) return false;
                    col[num]++;
                }
            }
       }

       for(int i=0;i<9;i=i+3){
            for(int j=0;j<9;j=j+3){
                unordered_map<int,int> grid;
                for(int m=i;m<i+3;m++){
                    for(int n=j;n<j+3;n++){
                        int num = board[m][n] - '0';
                        if(num!='.'-'0'){
                            if(grid[num]) return false;
                            grid[num]++;
                        }        
                    }
                }
            }
       }

       return true;
    }
};
