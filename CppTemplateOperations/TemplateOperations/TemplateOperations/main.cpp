#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include<cmath>
#include "Sample.h"


using namespace std;

template <class MathOps>
MathOps getSum(MathOps x, MathOps y) {

    return x + y;
}


class SampleClass
{
public:                             // Accesible properties from main
    int i;                          // Property of SampleClass
    string* FSptr;                  // String pointer defined within the class
    int* IntPtr;                    // Integer pointer defined within the class

    void write()
    {
        //y_1 = 5.3;
        //z_1 = 10;
        cout << "Name: " << *FSptr << endl;  // This function outputs the name of the class
        cout << "y=" << y<< endl;            // This function outputs the class private property
        cout << "z=" << z<< endl;            // This function outputs the class private property
    }
    void yaz();                    // External function definition 
    SampleClass(string str, int value, float y, int z) {
        FSptr = new string;
        IntPtr = new int;

        *FSptr = str;
        *IntPtr = value;
        this->y = y;
        this->z = z;
    }

    SampleClass(string str, float y, int z) {
        FSptr = new string;
        *FSptr = str;
        this->y = y;
        this->z = z;
    }

    SampleClass() {
        this->y = NULL;
        this->z = NULL;
    }

    ~SampleClass() {
        delete FSptr;                // It avoids memory leakage
        delete IntPtr;                // It avods memory leakage

        cout << "Destructor is called" << endl;
    }

private:                           // Accesible properties from SampleClass itself
    float y;                       // private float
    int z;                         // private integer

};

void SampleClass::yaz()
{
    cout << "i=" << i << endl;         // This function outputs the class property
}

void trial(SampleClass* ClassName) {

    ClassName -> write();

}

int main() {

    ofstream myfile;

    const int N_size = 2;                                    // this needs to be defined as constant to assign it as a size of array
    SampleClass XMenFirstClass("X-Men First Class", 7, 5.8 ,9);                       // Constructor trial class
   // SampleClass*  Class502 = new SampleClass(2.7,5);                             // Pointer trial class                               
    Sphere      GoldenSphere;                                // Sphere class
    Cube        IceCube;                                     // Sphere class
    Cube* RedCube = new Cube();                               // Pointer Red cube
    float x[3] = { 3.2, 5.7, 7.6 };                           // the center of the sphere

    // Property upload for XMenFirst Class
    XMenFirstClass.i = 27;                                // let's give the property of this class
     // Property upload for Class 502
  //  Class502 -> i = 27;                                       // let's give the property of this class
    //XMenFirstClass[1].i = 2;                             // let's give the property of this class
    // Property upload for Golden Sphere
    GoldenSphere.r = 15.9;                                      // let's give the radius of sphere
    IceCube.L = 15.9;                                      // let's give the radius of sphere

    RedCube -> L = 20.5;                                      // let's define the edge length of a pointer Red cube

    SampleClass& XMenSecondClass = XMenFirstClass;        // Let's change the class name

    cout << "X-Men Second Class" << endl;                  // Second Class output
    XMenSecondClass.write();                               // Let's output the property
    XMenSecondClass.yaz();                                 // Let's output the property

    //cout << "X-Men First Class" << endl;                   // Second Class output
    //XMenFirstClass[1].write();                             // Let's output the property
    //XMenFirstClass[1].yaz();                               // Let's output the property

    cout << "Golden Sphere Volume" << endl;                // Golden Sphere output
    GoldenSphere.Volume();                                 // Let's output the volume of the golden sphere

    cout << "Golden Sphere Surface Area" << endl;          // Golden Sphere output
    GoldenSphere.Area();                                   // Let's output the volume of the golden sphere

    cout << "Golden Sphere Color" << endl;                  // Golden Sphere output
    GoldenSphere.Color();                                   // Let's output the volume of the golden sphere

    cout << "The center of Golden Sphere" << endl;          // Golden Sphere output
    GoldenSphere.setCenter(x);                              // Let's output the volume of the golden sphere
    GoldenSphere.getCenter();                              // Let's output the volume of the golden sphere


    cout << "Ice Cube Volume" << endl;                     // Ice Cube output
    IceCube.Volume();                                      // Let's output the volume of the ice cube

    cout << "Ice Cube Surface Area" << endl;               // Ice Cube output
    IceCube.Area();                                        // Let's output the area of the ice cube

    cout << "Red Cube Surface Area" << endl;               // Red Cube output
    RedCube -> Area();                                      // Let's output the area of the red cube

    cout << "Class 502 property" << endl;
    trial(&XMenSecondClass);                               // External writing of class 502

    cout << "Dizi eleman toplami: " << getSum(x[0], x[1]) << endl;
    //delete Class502;                                // let's delete the second class

    myfile.open("ClassOutput.txt");
    myfile << "Mahmut was here" << endl;
    myfile.close();

    return 0;
}