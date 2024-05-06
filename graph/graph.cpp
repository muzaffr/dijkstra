#include <limits.h>
#include <stdlib.h>
#include <utility>
#include <vector>

#include "priority_queue.hpp"
#include "graph.hpp"

Graph::Graph(int nodes)
{
    n = nodes;
    g.resize(n + 1);
}

void Graph::add_edge(int u, int v, int64_t w)
{
    g[u].push_back({v, w});
}

std::vector<int64_t> Graph::dijkstra(int source)
{
    const int64_t INF = LONG_LONG_MAX / 4;
    std::vector<int64_t> dist(n + 1, INF);
    PriorityQueue<std::pair<int64_t, int>> pq;

    dist[source] = 0;
    pq.insert({0, source});
    while (not pq.empty()) {
        auto [d, u] = pq.peek();
        pq.remove();
        for (auto [v, w] : g[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.insert({dist[v], v});
            }
        }
    }
    /* Replace all infinities in the distance vector by -1. */
    for (auto& d : dist) {
        if (d == INF) {
            d = -1;
        }
    }
    return dist;
}
