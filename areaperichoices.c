// program to calculate area and perimeter of circle,square and rectangle based on users choice.
#include<stdio.h>
int main()
{
    int choice;
    float radius,sides,length,width;
    float area,perimeter;
    printf("select your chooice from the folllowing");
    printf("\n1.circle");
    printf("\n2.square");
    printf("\n3.circle");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter the radius of circle: ");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
    }
    else if(choice==2)
    {
        printf("Enter the Sides of Square: ");
        scanf("%f",&sides);
        area=sides*sides;
        perimeter=4*sides;
        
    }
     else if(choice==3)
    {
        printf("Enter the length and width of Rectangle: \n");
        scanf("%f",&length);
        scanf("%f",&width);
        area=length*width;
        perimeter=2*(length+width);
    }
    else
    {
        printf("Invalid choice");
    }

    printf("Area: %.2f",area);
    printf("\nPerimeter: %.2f",perimeter);

    return 0;
    
}