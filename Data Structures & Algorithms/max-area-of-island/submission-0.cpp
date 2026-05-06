class Solution {
    vector<vector<int>> visited;
    void dfs(int i, int j, int& area, vector<vector<int>>& grid){
        area++;
        visited[i][j] = 1;

        if(i+1<visited.size() && !visited[i+1][j] && grid[i+1][j])
            dfs(i+1,j,area, grid);
        if(i-1>=0 && !visited[i-1][j] && grid[i-1][j])
            dfs(i-1,j,area, grid);
        if(j+1<visited[0].size() && !visited[i][j+1] && grid[i][j+1])
            dfs(i,j+1,area, grid);
        if(j-1>=0 && !visited[i][j-1] && grid[i][j-1])
            dfs(i,j-1,area, grid);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            vector<int> temp;
            for(int j=0;j<grid[0].size();j++){
                temp.push_back(0);
            }
            visited.push_back(temp);
        }

        int maxArea = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int area = 0;
                if(!visited[i][j] && grid[i][j]){
                    dfs(i,j,area, grid);
                }
                maxArea = max(maxArea,area);
            }
        }
        return maxArea;
    }
};
