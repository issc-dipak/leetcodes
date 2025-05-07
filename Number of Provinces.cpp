class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0, n = isConnected.size();
        unordered_map<int, vector<int>> adj(n); 
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j]) {
                    adj[i].push_back(j); 
                }
            }
        }

        vector<bool> visited(n, false); 
        
        
        for (int i = 0; i < n; i++) {
            if (visited[i]) continue; 
            
            queue<int> q;
            q.push(i);
            visited[i] = true; 
            
            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (!visited[v]) {    
                        visited[v] = true; 
                        q.push(v); 
                    }
                }
            }
            ans++; 
        }

        return ans; 
    }
};
