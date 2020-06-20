#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;

class Sphere
{
    public: 
    float r;                           // radius of the sphere
       
    void write()
    {
        float volume = (4 / 3) * M_PI * pow(r, 3);    // volume of the sphere   
        cout << "Volume of the sphere =" << volume << endl;  // This function outputs the volume of the sphere
    }
    
   // private:
    // float volume = (4 / 3) *  pow(r, 3);    // volume of the sphere
};

class SampleClass
{
    public:                             // Accesible properties from main
        int i;                          // Property of SampleClass
        void write()
        {
            y = 5.3;
            z = 10; 
            cout << "i=" << i << endl;  // This function outputs the class property
            cout << "y=" << y << endl;  // This function outputs the class private property
            cout << "z=" << z << endl;  // This function outputs the class private property
        }
        void yaz();                    // External function definition 
    private:                           // Accesible properties from SampleClass itself
        float y;                       // private float
        int z;                         // private integer

};

void SampleClass::yaz()
{
    cout << "i=" << i << endl;         // This function outputs the class property
}

int main() {

    ofstream myfile;
   
    const int N_size = 2;                                    // this needs to be defined as constant to assign it as a size of array
    SampleClass XMenFirstClass[N_size];   
    Sphere      GoldenSphere;                                // Sphere class

    // Property upload for XMenFirst Class
    XMenFirstClass[0].i = 27;                                // let's give the property of this class
    XMenFirstClass[1].i = 2;                                 // let's give the property of this class
    // Property upload for Golden Sphere
    GoldenSphere.r = 5;                                      // let's give the radius of sphere

    SampleClass &XMenSecondClass = XMenFirstClass[1];        // Let's change the class name

    cout << "X-Men Second Class" << endl;                  // Second Class output
    XMenSecondClass.write();                               // Let's output the property
    XMenSecondClass.yaz();                                 // Let's output the property

    cout << "X-Men First Class" << endl;                   // Second Class output
    XMenFirstClass[1].write();                             // Let's output the property
    XMenFirstClass[1].yaz();                               // Let's output the property

    cout << "Golden Sphere Class" << endl;                  // Golden Sphere output
    GoldenSphere.write();                                   // Let's output the volume of the golden sphere
   
    myfile.open("ClassOutput.txt");
    myfile << "Mahmut was here" << endl;
    myfile.close();

    return 0;
}