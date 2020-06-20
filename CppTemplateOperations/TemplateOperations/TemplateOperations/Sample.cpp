#include "Sample.h"

void Sphere::Volume()
 {
 float volume = (4 / 3) * M_PI * pow(r, 3);                  // volume of the sphere   
 cout << "Volume of the sphere =" << volume << endl;         // This function outputs the volume of the sphere
    }

void Sphere::Area()
{
    float area = 4.* M_PI * pow(r, 2);                       // volume of the sphere   
    cout << "Surface area of the sphere =" << area << endl;  // This function outputs the area of the sphere
}

void Sphere::Color()
{
    cout << "Color of the sphere is " << color << endl;  // This function outputs the area of the sphere
}

void Sphere::setCenter( float x[])
{
    if (x[0] < 0.) {
        cout << "Please enter a value bigger than 0" << endl;
        cin >> x[0];
    }
    
    // cout << "Please enter the x coordinate of the center " << endl;  // This function outputs the area of the sphere
    // cin >> x[0];
    x_center[0] = x[0];
    // cout << "Please enter the y coordinate of the center " << endl;  // This function outputs the area of the sphere
    // cin >> x[1];
    x_center[1] = x[1];
    // cout << "Please enter the z coordinate of the center " << endl;  // This function outputs the area of the sphere
    // cin >> x[2];
    x_center[2] = x[2];
    
}

void Sphere::getCenter()
{
    cout << " The coordinates of the center are " << x_center[1] << endl;  // This function outputs the area of the sphere
}

void Cube::Volume()
{
    float volume =  pow(L, 3);                  // volume of the sphere   
    cout << "Volume of the cube =" << volume << endl;         // This function outputs the volume of the sphere
}

void Cube::Area()
{
    float area = 6.* pow(L, 2);                       // volume of the sphere   
    cout << "Surface area of the cube =" << area << endl;  // This function outputs the area of the sphere
}