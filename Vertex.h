#pragma once
class Vertex
{
public:
	Vertex();
	Vertex(int number);
	~Vertex();

	int number;
	bool visited;
};