#include <vector>

/**
 * This class implements a weighted directed graph.
 */
class Graph
{
private:
    int n;  ///< Number of nodes in the graph.
    std::vector<std::vector<std::pair<int, long>>> g;   ///< The graph stored as an adjacency list.

public:
    /**
     * Constructor. Creates an empty graph of nodes nodes.
     * @param[in] nodes Number of nodes in the graph.
     */
    Graph(int nodes);

    /**
     * Adds a weighted directed edge to the graph.
     * @param[in] u Tail node of the edge.
     * @param[in] v Head node of the edge.
     * @param[in] w Weight of the edge.
     */
    void add_edge(int u, int v, int64_t w);

    /**
     * Provides the shortest distance to each node in the graph from the source node 
     * using Dijkstra's Single-source shortest path (SSSP) algorithm.
     * @param[in] source Index of the target element.
     * @return std::vector of distances from the source to every node in the graph.
     */
    std::vector<int64_t> dijkstra(int source);
};
