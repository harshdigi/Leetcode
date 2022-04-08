class Solution {
public:
   typedef std::vector<int> Nodes;
  typedef std::vector<Nodes> Graph;

  // Use references to avoid copy, prefer const when possible
  bool walk(const Graph & graph, Nodes & path, Graph & result) {
    int thisNode = path.back(); // Last pushed node is always current node
    if (thisNode == graph.size() - 1) return true; // Base case for found path
    for (size_t node = 0; node < graph[thisNode].size(); node++) {
      path.push_back(graph[thisNode][node]);
      if (walk(graph, path, result)) {
        result.push_back(path); // We hit base case, so add path to result
      }
      path.pop_back(); // Remove graph[thisNode][node] and continue checking
	  // This is done in all cases; Even if a path is found
    }
    return false; // We ran out of nodes to check, there are no more valid paths
  }

  vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    Graph result;
    Nodes path;
    path.push_back(0); // We only want paths that begin at node 0
    bool valid = walk(graph, path, result);
    return result;
  }
};