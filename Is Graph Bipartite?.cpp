class Solution {
public:

    bool dfs(vector<vector<int>>&graph,vector<int>&color,int node,int currColor){
        color[node]=currColor;
        for(auto neighbor:graph[node]){
            if(color[neighbor]==color[node]) return false;
            if(color[neighbor]==-1&& !dfs(graph, color,neighbor,1-currColor)){
                return false;
            }
        }
        return true;

    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);

        // dfs to return yes if bipartite and no if not 

        for(int i=0;i<n;i++){
            if(color[i]==-1 && !dfs(graph,color,i,0)){
                return false;
            }
        }
        return true;
        
    }
};
