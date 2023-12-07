#ifndef POINT_H
#define POINT_H

class Point {
private:
    float _lat, _lon, _alt;

public:
    Point(float lat, float lon, float alt);
    ~Point();
};

#endif