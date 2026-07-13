//S.C : O(V+E), V = number of vertices, E = number of edges
class Solution {
public:
    bool dfs(int cur, int target, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
        if (cur == target) 
            return true;

        visited[cur] = true;

        for (int& ngbr : adj[cur]) {
            if (!visited[ngbr]) {
                if (dfs(ngbr, target, adj, visited)) 
                    return true;
            }
        }

        return false;
    }

    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> adj;
        for (int i = 0; i + 1 < n; i++) {
            if (nums[i + 1] - nums[i] <= maxDiff) {
                adj[i].push_back(i + 1);
                adj[i + 1].push_back(i);
            }
        }

        vector<bool> result;
        for (auto& query : queries) {
            int u = query[0];
            int v = query[1];
            vector<bool> visited(n, false);
            result.push_back(dfs(u, v, adj, visited));
        }
        return result;
    }
};

