class Solution {
    vector<int> path;
    vector<vector<int>> res;
public:
    void find_paths(vector<vector<int>>& graph, int node = 0)
    {
        path.push_back(node);
        if (node == graph.size() - 1) 
            res.push_back(path);
        for(auto child : graph[node])
            find_paths(graph, child);
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
    {
        find_paths(graph);
        return res;
    }
};