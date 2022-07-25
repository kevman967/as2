#include "undirected.h"
#include <iostream>
using namespace std;

vector<Vertex> vertices;
vector<Edge> edges;
int V, E;

// default constructor
undirected::Graph::Graph(){
   
    V = 0;
    E = 0;
}

//add a vertex
bool Graph::addVertex(Vertex& v){
    vertices.push_back(v);
    V++;
    return true;
}

//remove a vertex

    






//add an edge
bool Graph::addEdge(Edge& e){
    edges.push_back(e);
    E++;
    return true;
}


//remove an edge
bool Graph::remove(Edge& e){
    for(int i = 0; i<edges.size(); i++){
        if(edges[i].get_starting_vertex().get_id()== e.get_starting_vertex().get_id())
            if(edges[i].get_ending_vertex().get_id()== e.get_ending_vertex().get_id()){
                edges.erase(edges.begin()+i);
                return true;
            }
    }
    return false;
}
void Graph::display() const{
    vector<Edge>::iterator i;
    for(i =edges.begin();i!=edges.end();i++){
        cout<<"\nbeginning: "<<(*i).get_starting_vertex().get_id();
        cout<<"ending: "<<(*i).get_ending_vertex().get_id();
        cout<<"weight"<<(*i).get_weight();
        cout<< endl;
    }
}
string Graph::toString() const{

    

}


//clean all vertices and edges
bool Graph::clean(){
    vertices.clear();
    edges.clear();
    return true;
}




//destructor
Graph::~Graph(){

}
