#ifndef AL_GRAPH_DFS
#define AL_GRAPH_DFS

#include "../LinkedList/DoubleLinkedList.h"

enum {A,B,C,D,E,F,G,H,I,J};

typedef struct _ual
{
	int numV;
	int numE;
	List* adjList;
	int* visitInfo;
} ALGraph;

void GraphInit(ALGraph* pg, int nv);

void GraphDestroy(ALGraph* pg);

void AddEdge(ALGraph* pg, int fromV, int toV);

void ShowGraphEdgeInfo(ALGraph* pg);

void DFShowGraphVertex(ALGraph* pg, int startV);

#endif // !AL_GRAPH_DFS
