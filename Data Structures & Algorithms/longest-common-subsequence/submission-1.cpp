class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> table;
        for(int i=0;i<m;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(0);
            }
            table.push_back(row);
        }

        if(text1[0]==text2[0]) table[0][0] = 1;

        for(int i=1;i<m;i++){
            if(table[i-1][0]==1 || text2[i]==text1[0]) table[i][0] = 1;
        }

        for(int j=1;j<n;j++){
            if(table[0][j-1]==1 || text2[0]==text1[j]) table[0][j] = 1;
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(text2[i]==text1[j] && table[i-1][j] == table[i][j-1])
                    table[i][j] = table[i-1][j] + 1;
                else
                    table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",table[i][j]);
            }
            printf("\n");
        }

        return table[m-1][n-1];
    }
};
