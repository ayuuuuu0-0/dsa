class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int islands = 0;
        int neighbour = 0;

        int row = grid.size();
        int col = grid[0].size();

        for (int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                
                if (grid[i][j] == 1){
                    islands++;

                    if(i+1 < row && grid[i+1][j]==1){
                        neighbour++;
                    }

                    if(j+1<col && grid[i][j+1] == 1){
                        neighbour++;
                    }
                }
            }
       }
        return (islands * 4) - (neighbour * 2);
    }
};


// DFS

class Solution: {
    public: {
        int dfs(vector<vector<<int>>& grid, int r, int c){

        }
    };
}