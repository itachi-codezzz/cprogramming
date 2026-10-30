#include <stdio.h>
int main()
{
    float length, breadth, radius, base, height;
    float rectangleArea, rectanglePerimeter;
    float circleArea, circleCircumference, triangleArea;
    float pi = 3.14159f;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    rectangleArea = length * breadth;
    rectanglePerimeter = 2 * (length + breadth);
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circleArea = pi * radius * radius;
    circleCircumference = 2 * pi * radius;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    triangleArea = 0.5f * base * height;
    printf("Rectangle area = %f\n", rectangleArea);
    printf("Rectangle perimeter = %f\n", rectanglePerimeter);
    printf("Circle area = %f\n", circleArea);
    printf("Circle circumference = %f\n", circleCircumference);
    printf("Triangle area = %f\n", triangleArea);
    return 0;
}
