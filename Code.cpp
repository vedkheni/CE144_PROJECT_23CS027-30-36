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

   switch (choice)
    {
    case 1:
        cout << "Enter radius of the circle: \n";
        cin >> radius;
        cout << "\nArea of the circle is: " << area_ofCircle(radius) << endl;
        cout << "__________________________________"<<endl;
        break;
    case 2:
        cout << "Enter length and width of the rectangle: \n";
        cin >> length >> width;
        cout << "\nArea of the rectangle is: " << area_ofRectangle(length, width) << endl;
         cout << "__________________________________";
        break;
    case 3:
        cout << "Enter base and height of the triangle: \n";
        cin >> base >> height;
        cout << "\nArea of the triangle is: " << area_ofTriangle(base, height) << endl; 
        cout << "__________________________________";
        break;
    case 4:
        cout << "Enter the side length of the square: \n";
        cin >> side;
        cout << "\nArea of the square is: " << area_ofSquare(side) << endl;
         cout << "__________________________________"<<endl;
        break;
      case 5:
        cout << "Enter lengths of both bases and height of the trapezoid: \n";
        cin >> base1 >> base2 >> height;
        cout << "\nArea of the trapezoid is: " << area_ofTrapezoid(base1, base2, height) <<endl;
         cout << "__________________________________"<<endl;
        break;
    case 6:
        cout << "Enter base and height of the parallelogram: \n";
        cin >> base >> height;
        cout << "\nArea of the parallelogram is: " << area_ofParallelogram(base, height) << endl;
         cout << "__________________________________"<<endl;
        break;
    case 7:
        cout << "Enter radius and height of the cone: \n";
        cin >> radius >> height;
        cout << "\nArea of the cone is: " << area_ofCone(radius, height) << endl; 
        cout << "__________________________________"<<endl;
        break;
    case 8:
        cout << "Enter radius and height of the cylinder: \n";
        cin >> radius >> height;
        cout << "\nArea of the cylinder is: " << area_ofCylinder(radius, height) << endl;
         cout << "__________________________________"<<endl;
        break;



     
     default:
        cout << "!!!Invalid choice!!!\nPlease choose a valid option." << endl;
      cout << "__________________________________"<<endl;
        break;
    }
    cout<<"\n     23CS027_23CS030_23CS036";
    cout << "\n__________________________________"<<endl;
    return 0;
}
