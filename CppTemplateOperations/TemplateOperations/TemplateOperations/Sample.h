#ifndef SAMPLE_H_
#define SAMPLE_H_
#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include<cmath>
//#include "sample.h"
using namespace std;

class Sphere
{

private:

    string color = "Red";               // 
    float x_center[3];                  // the coordinates of the center of the sphere

public:
    float r;                           // radius of the sphere

    void Volume();                     // computes the volume of the sphere
    void Area();                       // computes the surface of the sphere
    void Color();                      //  gets the color of the sphere
    void setCenter(float x[]);                      //  gets the color of the sphere
    void getCenter();



};


class Cube
{
public:
    float L;                           // radius of the sphere

    void Volume();                     // computes the volume of the sphere
    void Area();                       // computes the surface of the sphere

    // private:
     // float volume = (4 / 3) *  pow(r, 3);    // volume of the sphere
};

#endif /* SAMPLE_H_ */
