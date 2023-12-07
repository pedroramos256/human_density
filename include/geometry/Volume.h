#ifndef VOLUME_H
#define VOLUME_H

#include "Point.h"
#include "Polygon.h"
#include <vector>
using namespace std;

class Volume
{
private:
    Point _center;
    vector<Polygon> _faces;
    float _volume = 0;
public:
    Volume(Point center, vector<Polygon> faces);
    float calculate_volume();
    ~Volume();
};

#endif