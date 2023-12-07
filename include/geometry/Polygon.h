#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <vector>
using namespace std;

class Polygon
{
private:
    vector<Point> _points; //assuming last point connects to the first
    float _area = 0;
public:
    Polygon(vector<Point> points);
    vector<Polygon> decompose_in_triangles();
    bool is_triangle();
    float calculate_area();
    ~Polygon();
};

#endif