//
//  Edge.hpp
//  Graph
//
//  Created by Scott McDonald on 2022-07-25.
//


#pragma once
#include "Vertex.h"
class Edge{
    private:
        double weight;
        Vertex starting_vertex;
        Vertex ending_vertex;
    public:
        Edge();
        Edge(double,Vertex&,Vertex&);
        Edge(Edge& copy);
        //getter and setter
        double get_weight();
        Vertex get_starting_vertex();
        Vertex get_ending_vertex();
        void set_weight(double);
        void set_starting_vertex(Vertex&);
        void set_ending_vertex(Vertex&);
        
};
