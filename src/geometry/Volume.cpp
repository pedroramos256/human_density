#include "Volume.h"

Volume::Volume(Point center, vector<Polygon> faces):_center(center),_faces(faces){
}
float Volume::calculate_volume(){
   return 0;
}
Volume::~Volume(){}