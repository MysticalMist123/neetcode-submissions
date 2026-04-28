class Solution {
    vector<vector<int>> visited;
    int m,n;

    void dfs(int r, int c, vector<vector<char>>& grid){
        visited[r][c] = 1;
        
        if(r+1<m && !visited[r+1][c] && grid[r+1][c]=='1'){
            dfs(r+1,c,grid);
        }

        if(r-1>=0 && !visited[r-1][c] && grid[r-1][c]=='1'){
            dfs(r-1,c,grid);
        }

        if(c+1<n && !visited[r][c+1] && grid[r][c+1]=='1'){
            dfs(r,c+1,grid);
        }

        if(c-1>=0 && !visited[r][c-1] && grid[r][c-1]=='1'){
            dfs(r,c-1,grid);
        }

        return;
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        for(int i=0;i<m;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(0);
            }
            visited.push_back(row);
        }

        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(i,j, grid);
                    c++;
                }
            }
        }
        return c;
    }
};
