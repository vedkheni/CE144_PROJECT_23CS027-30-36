/*
This Project is created by 23CS027_23CS030_23CS036

TOPIC: -: Area Calculation Program :-
*/

#include <iostream>
#include <cmath>
using namespace std;
double area_ofCircle(double radius);
double area_ofRectangle(double length, double width);
double area_ofTriangle(double base, double height);
double area_ofSquare(double side);
double area_ofTrapezoid(double base1, double base2, double height);
double area_ofParallelogram(double base, double height);
double area_ofCone(double radius, double height);
double area_ofCylinder(double radius, double height);
double area_ofCube(double side);
double area_ofPyramid(double base, double height);
double area_ofRhombus(double diagonal1, double diagonal2);
double area_ofSphere(double radius);
int main()
{
 int choice;
    double radius, length, width, base, height, side, base1, base2, diagonal1, diagonal2;
    cout << "\n__________________________________\n" ;
    cout << "|                                |"<< endl;
    cout << "| -: Area Calculation Program :- |"<< endl;
    cout << "|                                |"<< endl;
    cout << "|\t  1. Circle           \t |" << endl;
    cout << "|\t  2. Rectangle        \t |" << endl;
    cout << "|\t  3. Triangle         \t |" << endl;
    cout << "|\t  4. Square           \t |" << endl;
    cout << "|\t  5. Trapezoid        \t |" << endl;
    cout << "|\t  6. Parallelogram    \t |" << endl;
    cout << "|\t  7. Cone             \t |"<< endl;
    cout << "|\t  8. Cylinder         \t |"<< endl;
    cout << "|\t  9. Cube             \t |"<< endl;
    cout << "|\t  10. Pyramid         \t |"<< endl;
    cout << "|\t  11. Rhombus         \t |"<< endl;
    cout << "|\t  12. Sphere          \t |"<< endl;
    cout << "__________________________________"<<endl;
    cout << " \nEnter your choice : ";
    cin >> choice;
    cout << "__________________________________"<<endl<<endl;
}
