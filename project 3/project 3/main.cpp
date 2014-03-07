// Add your comments here
#include <iostream>
#include "triangle.h"
using namespace std;
int main()
{
    float sideOne, sideTwo, sideThree;
    cout << "Enter the values for three sides now: " << endl;
    cin >> sideOne>> sideTwo>> sideThree;
    Triangle myFigure(sideOne, sideTwo, sideThree); //call Triangle constructor function
    if ( myFigure.isTriangle() == 'Y') //call Triangle isTriangle function
    {
        cout << "Is this triangle an isosceles triangle? "<<myFigure.isosceles() <<endl;
        cout << "Is this triangle an equilateral triangle? " <<myFigure.equilateral() << endl;
        cout << "Is this triangle a right triangle? " <<myFigure.right() << endl;
        cout << "Is this triangle an obtuse triangle? " <<myFigure.obtuse() << endl;
    }
    else
        cout << "These sides do not construct a triangle." << endl;
    return 0;
}