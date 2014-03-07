
// Declarations for class Triangle
class Triangle
{
public:
    Triangle(float , float, float );
    // constructor for Triangle object
    Triangle();
    // if no arguments, set each side's length to zero
    char isTriangle();
    //returns 'Y' if three sides make a triangle; 'N' otherwise
    char isosceles();
    // returns 'Y' if triangle is isosceles; 'N' otherwise
    char equilateral();
    // returns 'Y' if triangle is equilateral; 'N' otherwise
    char right();
    // returns 'Y' if triangle is a right triangle; 'N' otherwise
    char obtuse();
    // returns 'Y' if triangle is an obtuse triangle; 'N' otherwise
private:
    float side1, side2, side3;
};