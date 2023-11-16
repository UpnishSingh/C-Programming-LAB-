//Program to calculate area and perimeter of circle,square and rectangle
#include<stdio.h>
int main()
{
    float c;//c=radius of a circle 

    //Circle
    printf("Enter the radius of a circle:");
    scanf("%f",&c);
    printf("Area of circle is: %.2f\n",3.14*c*c);
    printf("Perimrter of a circle: %.2f\n",2*3.14*c);
    //Square
    float s;//s=side of a square
    printf("Enter the sides of square");
    scanf("%f",&s);
    printf("Area of square is: %.2f\n",s*s);
    printf("Perimeter of a square: %.2f\n",4*s);
    //Rectangle
    float l,w;//length and width of rectangle
    printf("Enter length and width of rectangle");
    scanf("%f %f",&l,&w);
    printf("Area of rectangle is: %.2f\n",l*w);
    printf("Perimeter of a rectangle: %.2f\n",2*(l*w));

    return 0;
}