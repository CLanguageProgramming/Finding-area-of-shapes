#include <stdio.h>
int rectangle();
int square();
int triangle();
int main()
{
    int shape;
    int side1;
    int side2;
    char unit;
    int area;
    printf("Enter 1 to find the area of a Rectangle\n");
    printf("Enter 2 to find the area of a Square\n");
    printf("Enter 3 to find the area of a Triangle\n");
    printf("Enter a Number >>");
    scanf("%d", &shape);
    switch(shape)
    {
        case 1:
                printf("Enter the length of the Rectangle >>");
                scanf("%d", &side1);
                printf("Enter the Bredth of the Rectangle >>");
                scanf("%d", &side2);
                getchar();
                printf("Enter the Unit of measurement >>");
                scanf("%c", &unit);
                area = rectangle(side1, side2);
                printf("The area of the rectangle is %d%c^2", area, unit);
                return 0;
                break;
                
        case 2:
                printf("Enter the side of the Square >>");
                scanf("%d", &side1);
                getchar();
                printf("Enter the Unit of measurement >>");
                scanf("%c", &unit);
                area = square(side1);
                printf("The area of the Square is %d%c^2", area, unit);
                return 0;
                break;
                
        case 3:
                printf("Enter the base of the Triangle >>");
                scanf("%d", &side1);
                printf("Enter the height of the Triangle >>");
                scanf("%d", &side2);
                getchar();
                printf("Enter the Unit of measurement >>");
                scanf("%c", &unit);
                area = triangle(side1, side2);
                printf("The area of the Triangle is %d%c^2", area, unit);
                return 0;
                
        default:
                printf("You Have Entered the wrong number please try again later");
                break;
    }
}

int rectangle(int side1, int side2)
{
    int area = side1*side2;
    return area;
}

int square(int side1)
{
    int area = side1*side1;
    return area;
}

int triangle(int side1, int side2)
{
    int area = (side1*side2)/2;
    return area;
}
