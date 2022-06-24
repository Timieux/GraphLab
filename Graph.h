#pragma once
#include <list>
#include "Vertex.h"
#include "Edge.h"
#include <vector>

using namespace std;

class Graph
{
public:
	Graph();
	~Graph();

	vector<Vertex*> vertices;
	vector<Edge*> edges;

	void Addvertex(Vertex* vertex);
	void AddEdge(Vertex* from, Vertex* to, int weight);
	int VertexCount();
	int EdgeCount();
	vector<Vertex*> GetVertexList(Vertex* vertex);
	int** GetMatrix();
};