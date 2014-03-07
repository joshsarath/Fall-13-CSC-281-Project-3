/*
CSC 281 - Project #1
modifier: Josh Sarath
filename:
date last modified: 9/26/13
action:
input:
output:
*/

#include <math.h>
#include "triangle.h"
//------------- Define member functions for class Triangle -------
//Constructor function with initialization:
Triangle::Triangle(float s1, float s2, float s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
}
//Constructor function with default values:
Triangle::Triangle()
{
    side1 = 0;
    side2 = 0;
    side3 = 0;
}
//Isoceles function
char Triangle::isosceles()
/*
action:tests whether isoceles
input: side1, side2, side3
output:'Y' or 'N'
*/
{
    if (side1==side2 || side2==side3)//based on assumption of sides being entered in ascending order
        return 'Y';
    return 'N';
}
//Equilateral function
char Triangle::equilateral()
/*
 action:tests whether equilateral
 input: side1, side2, side3
 output:'Y' or 'N'
 */
{
    if (side1==side3)//based on assumption of sides in ascending order
        return 'Y';
    return 'N';
}
//Obtuse function
char Triangle::obtuse()
/*
 action:tests whether obtuse
 input: side1, side2, side3
 output:'Y' or 'N'
 */
{
    if (side3 > sqrt(side2*side2+side1*side1))//pythagorean theroem showing whether greater than 90 degrees
        return 'Y';
    return 'N';
}
// isTriangle function
char Triangle::isTriangle()
/*
 action:tests whether a real triangle
 input: side1, side2, side3
 output:'Y' or 'N'
 */
{
    if (side1+side2>side3)// first two sides together must be longer than longest side
        return 'Y';
    return 'N';
}
// right function
char Triangle::right()
/*
 action:tests whether right triangle
 input: side1, side2, side3
 output:'Y' or 'N'
 */
{
    if (side3 == sqrt(side2*side2+side1*side1))//pythagorean theorem
        return 'Y';
    return 'N';
}