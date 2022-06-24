#include <iostream>
#include "Graph.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Graph* graph = new Graph();

    printf("Заполнение графа \n");
    Vertex* v1 = new Vertex(1);
    Vertex* v2 = new Vertex(2);
    Vertex* v3 = new Vertex(3);
    Vertex* v4 = new Vertex(4);
    Vertex* v5 = new Vertex(5);
    Vertex* v6 = new Vertex(6);
    Vertex* v7 = new Vertex(7);
    printf("\n");

    vector<Vertex*> verteces = { v1, v2, v3, v4, v5, v6, v7 };

    graph->Addvertex(v1);
    graph->Addvertex(v2);
    graph->Addvertex(v3);
    graph->Addvertex(v4);
    graph->Addvertex(v5);
    graph->Addvertex(v6);
    graph->Addvertex(v7);

    graph->AddEdge(v1, v2, 1);
    graph->AddEdge(v1, v3, 1);
    graph->AddEdge(v3, v4, 1);
    graph->AddEdge(v2, v5, 1);
    graph->AddEdge(v2, v6, 1);
    graph->AddEdge(v6, v5, 1);
    graph->AddEdge(v5, v6, 1);

    printf("Вывод матрицы смежности \n");
    printf("\n");
    int** matrix = graph->GetMatrix();

    printf("    ");
    for (int i = 0; i < graph->VertexCount(); i++)
    {
        printf("%i ", i + 1);
    }
    printf("\n");
    printf("------------------\n");

    for (int i = 0; i < graph->VertexCount(); i++)
    {
        printf("%i | ", i + 1);
        for (int j = 0; j < graph->VertexCount(); j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Вывод списка смежности \n");
    for (int i = 0; i < verteces.size(); i++)
    {
        Vertex* pV = verteces.at(i);
        vector<Vertex*> pVs = graph->GetVertexList(pV);
        printf("%i: ", pV->number);
        for (int i = 0; i < pVs.size(); i++)
        {
            printf("%i ", pVs[i]->number);
        }
        printf("\n");
    }

    free(matrix);
}