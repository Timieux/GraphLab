#include <vertex.h>
#pragma once

class Edge
{
public:
	Edge();
	Edge(Vertex* from, Vertex* to, int weight = 1);
	~Edge();

	Vertex* from;
	Vertex* to;
	int weight;
};