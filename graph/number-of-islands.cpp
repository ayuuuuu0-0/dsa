class Solution {
public:
void bfs(vector<vector<char>>&grid, int start_r, int start_c){
    int rows = grid.size();
    int cols = grid[0].size();

   queue<pair<int, int>>q;
   q.push({start_r, start_c});

   grid[start_r][start_c] = '0';

   int gr[] = {1,-1,0,0};
   int gc[] = {0,0,1,-1};

   while(!q.empty()){
   auto[r,c] = q.front();
   q.pop();

   for(int i=0; i<4; i++){
    int nr = r + gr[i];
    int nc = c + gc[i];
   
   if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc]=='1'){
    q.push({nr,nc});
    grid[nr][nc]='0';
   } 
   }
   }
}
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int island_count=0;

        for(int i=0; i<rows; i++){
             for(int j=0; j<cols; j++){
                if(grid[i][j] =='1'){
                    island_count++;
                    bfs(grid, i,j);
                }
             }
        }
        return island_count;
    }
};