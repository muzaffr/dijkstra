#include <vector>

#include "io.hpp"
#include "graph.hpp"

int main()
{
    Input in; Output out;
    int nodes, edges;
    in >> nodes >> edges;
    Graph graph(nodes);
    for (int i = 0; i < edges; ++i) {
        int u, v;
        int64_t w;
        in >> u >> v >> w;
        graph.add_edge(u, v, w);
    }
    int source;
    in >> source;
    auto distances = graph.dijkstra(source);
    for (int node = 1; node <= nodes; ++node) {
        out << distances.at(node) << ' ';
    }
    out << '\n';
    return 0;
}
