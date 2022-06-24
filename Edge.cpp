#include "Edge.h"
#include "Vertex.h"

Edge::Edge()
{
	this->from = nullptr;
	this->to = nullptr;
	this->weight = 0;
}

Edge::Edge(Vertex* from, Vertex* to, int weight)
{
	this->from = from;
	this->to = to;
	this->weight = weight;
}

Edge::~Edge()
{

}