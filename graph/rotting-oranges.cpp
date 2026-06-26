class Solution {
    public:
    int orangesRotting(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int,int>> q;
    int freshCount = 0;

    for(int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            if (grid[i][j]==2){
                q.push({i,j});
            } else if(grid[i][j]==1){
                freshCount++;
            }
        }
    }
    if (freshCount == 0) return 0;

    int minutes = 0;

    while (!q.empty() && freshCount>0){
        int n = q.size();
        minutes++;

        for(int i=0; i<n; i++){
            auto[r,c] = q.front();
            q.pop();

        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};

        for (int d=0; d<4; d++){
            int nr = r + dr[d];
            int nc = c + dc[d];

            if(nr>= 0 && nr<rows && nc>=0 && nc < cols && grid[nr][nc]==1){
                grid[nr][nc]==2;
                freshCount--;
                q.push({nr,nc});
            }
        }
        }
    }
    return (freshCount==0) ? minutes: -1;
    }
};