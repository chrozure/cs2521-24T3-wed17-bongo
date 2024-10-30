#include <stdio.h>

#include "Set.h"
#include "Graph.h"

Set reachable(Graph g, Vertex src);
static void dfs(Graph g, Set reached, Vertex src);

int main(void) {
    Graph g = GraphNew(10);
    GraphInsertEdge(g, 0, 1);
    GraphInsertEdge(g, 0, 2);
    GraphInsertEdge(g, 0, 3);
    GraphInsertEdge(g, 2, 1);
    GraphInsertEdge(g, 2, 3);
    GraphInsertEdge(g, 2, 4);
    GraphInsertEdge(g, 2, 5);
    GraphInsertEdge(g, 3, 0);
    GraphInsertEdge(g, 3, 4);
    GraphInsertEdge(g, 4, 2);
    GraphInsertEdge(g, 4, 5);
    GraphInsertEdge(g, 4, 7);
    GraphInsertEdge(g, 4, 8);
    GraphInsertEdge(g, 5, 1);
    GraphInsertEdge(g, 6, 5);
    GraphInsertEdge(g, 6, 7);
    GraphInsertEdge(g, 6, 9);
    GraphInsertEdge(g, 7, 4);
    GraphInsertEdge(g, 7, 5);
    GraphInsertEdge(g, 7, 8);
    GraphInsertEdge(g, 8, 7);
    GraphInsertEdge(g, 9, 7);
    GraphInsertEdge(g, 9, 8);

    int src = 6;
    Set s = reachable(g, src);
    printf("Vertices reachable from %d: ", src);
    SetPrint(s);

    SetFree(s);
    GraphFree(g);
    return 0;
}

Set reachable(Graph g, Vertex src) {
    Set reached = SetNew();
    dfs(g, reached, src);
    return reached;
}

// Recursive depth-first search
static void dfs(Graph g, Set reached, Vertex src) {
    // base case - src has already been reached
    if (SetContains(reached, src)) return;

    // recursive case - search through all the neighbours
    SetAdd(reached, src);
    for (Vertex w = 0; w < GraphNumVertices(g); w++) {
        if (GraphIsAdjacent(g, src, w)) {
            dfs(g, reached, w);
        }
    }
}
