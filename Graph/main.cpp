#include <iostream>
#include "graphtype.h"
#include <string>
using namespace std;

int main()
{

	int graphSize;
	cout<<"Enter The Max Number of Vertices in the Graph: "<<endl;
	cin>>graphSize;

    GraphType<string> g(graphSize);

    cout<<"Graph Successfully Created"<<endl;

    g.AddVertex("A");
    g.AddVertex("B");
    g.AddVertex("C");
    g.AddVertex("D");
    g.AddVertex("E");
    g.AddVertex("F");
    g.AddVertex("G");
    g.AddVertex("H");

    g.AddEdge("A","B",1);
    g.AddEdge("A","C",1);
    g.AddEdge("A","D",1);

    g.AddEdge("B","A",1);

    g.AddEdge("D","A",1);
    g.AddEdge("D","E",1);
    g.AddEdge("D","G",1);

    g.AddEdge("F","H",1);

    g.AddEdge("G","F",1);
    g.AddEdge("H","E",1);

    cout<<"Degree of A: "<<g.OutDegree("D")<<endl;

    if(g.FoundEdge("A","D")){
        cout<<"A to B found"<<endl;
    }
    else{
        cout<<"A to B not found"<<endl;
    }

    if(g.FoundEdge("B","D")){
        cout<<"B to D found"<<endl;
    }
    else{
        cout<<"B to D not found"<<endl;
    }

    g.DepthFirstSearch("B","E");
    g.DepthFirstSearch("E","B");
    g.BreadthFirstSearch("B","E");
    g.BreadthFirstSearch("B","E");


    return 0;
}
