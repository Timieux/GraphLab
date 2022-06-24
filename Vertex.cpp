#include "Vertex.h"

Vertex::Vertex()
{
	this->number = 0;
	this->visited = false;
}

Vertex::Vertex(int number)
{
	this->number = number;
	this->visited = false;
}

Vertex::~Vertex()
{

}