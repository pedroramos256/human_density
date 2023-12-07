#include "Polygon.h"

Polygon::Polygon(vector<Point> points):_points(points){
}
vector<Polygon> Polygon::decompose_in_triangles(){
    return vector<Polygon>(); //TODO
}
bool Polygon::is_triangle(){
    return _points.size() == 3;
}

float Polygon::calculate_area(){
    if(is_triangle)
        return 0; //TODO
    else{
        vector<Polygon> triangles = decompose_in_triangles();
        float total = 0;
        for(int i = 0;i < triangles.size();i++)
            total += triangles[i].calculate_area();
        
        return total;
    }
}
Polygon::~Polygon(){}