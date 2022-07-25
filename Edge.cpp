//
//  Edge.cpp
//  Graph
//
//  Created by Scott McDonald on 2022-07-25.
//




#include "Edge.h"
Edge::Edge(){
    weight = 0;
}
Edge::Edge(double weight1,Vertex& s, Vertex& e):starting_vertex(s),ending_vertex(e){
    weight=weight1;
}
Edge::Edge(Edge& copy){
    starting_vertex = copy.get_starting_vertex();
    ending_vertex= copy.get_ending_vertex();
    weight=copy.get_weight();
}
//getter and setter
double Edge::get_weight(){
    return weight;
}
Vertex Edge::get_starting_vertex(){
    return starting_vertex;
}
Vertex Edge::get_ending_vertex(){
    return ending_vertex;
}
void Edge::set_weight(double weight1){
    weight = weight1;
}
void Edge::set_starting_vertex(Vertex& s){
    starting_vertex = s;
}
void Edge::set_ending_vertex(Vertex& e){
    ending_vertex = e;
}
