#include <iostream>
using namespace std;

struct Edge
{
    int adj;
    int weight;
};

class WeightedGraph
{
private:
    Edge graph[3][3];

public:
    WeightedGraph()
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                graph[i][j].adj = 0;
                graph[i][j].weight = 0;
            }
        }
    }

    void join(int vertex1, int vertex2, int wt)
    {
        graph[vertex1][vertex2].adj = 1;
        graph[vertex1][vertex2].weight = wt;

    }

    void display()
    {
        cout << "Adjacency Matrix with Weights:\n";
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (graph[i][j].adj)
                    cout << graph[i][j].weight << "\t";
                else
                    cout << "0\t";
            }
            cout << "\n";
        }
    }
};

void main()
{
    WeightedGraph g;
    int v1, v2, weight;
    cout << "Enter 3 edges only."<< endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter edge " << (i + 1) << " (format: vertex1 vertex2 weight): ";
        cin >> v1 >> v2 >> weight;
        g.join(v1, v2, weight);
    }
    g.display();
}
