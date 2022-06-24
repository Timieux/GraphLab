#include "Graph.h"
#include <iterator>

Graph::Graph()
{

}

Graph::~Graph()
{
}

void Graph::Addvertex(Vertex* vertex)
{
	vertices.push_back(vertex);
}

void Graph::AddEdge(Vertex* from, Vertex* to, int weight)
{
	Edge* edge = new Edge(from, to, weight);
	edges.push_back(edge);
}

int Graph::VertexCount()
{
	return vertices.size();
}

int Graph::EdgeCount()
{
	return edges.size();
}

int** Graph::GetMatrix()
{
	int x = vertices.size(), y = vertices.size();
	int** dynamicArray = (int**)malloc(sizeof(int*) * x);
	for (int i = 0; i < x; i++)
		dynamicArray[i] = (int*)malloc(sizeof(int) * y);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			dynamicArray[i][j] = 0;
		}
	}

	for (int i = 0; i < edges.size(); i++)
	{
		int row = edges.at(i)->from->number - 1;
		int column = edges.at(i)->to->number - 1;
		dynamicArray[row][column] = edges.at(i)->weight;
	}

	return dynamicArray;
}

vector<Vertex*> Graph::GetVertexList(Vertex* vertex)
{
	vector<Vertex*> result = vector<Vertex*>();

	for (int i = 0; i < edges.size(); i++)
	{
		Edge* edge = edges.at(i);
		if (edge->from == vertex)
		{
			result.push_back(edge->to);
		}
	}

	return result;
}