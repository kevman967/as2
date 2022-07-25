//
//  Vertex.h
//  Graph
//
//  Created by Scott McDonald on 2022-07-25.
//

#pragma once

class Vertex{
    private:
        int id;
        double value;
    public:
    Vertex();
    Vertex(int,double);
    Vertex(Vertex& copy);
    //getter and setter
    int get_id();
    double get_value();
    void set_id(int);
    void set_value(double);
};
