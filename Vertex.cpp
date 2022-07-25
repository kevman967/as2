//
//  Vertex.cpp
//  Graph
//
//  Created by Scott McDonald on 2022-07-25.
//

#include <stdio.h>
#include "Vertex.h"

Vertex::Vertex(){
 id = 0;
 value =0;
}
Vertex::Vertex(int one,double two){
    id = one;
    value = two;
}
Vertex::Vertex(Vertex& copy){
    id = copy.get_id();
    value = copy.get_value();
}
int Vertex::get_id(){
    return id;
}
double Vertex::get_value(){
    return value;
}
void Vertex::set_id(int one){
    id = one;
}
void Vertex::set_value(double one){
    value = one;
}
