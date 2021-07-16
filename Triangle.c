//Write a C program using a user-defined function to find the area of a rectangle. Take input from the user.
#include <stdio.h>
int areaoftriangle();
int main()
{
    int base;
    int height;
    char unit;
    int area;
    printf("Enter the base of the Triangle >>");
    scanf("%d", &base);
    printf("Enter the height of the Triangle >>");
    scanf("%d", &height);
    getchar();
    printf("Enter the Unit of measurement >>");
    scanf("%c", &unit);
    area = areaoftriangle(base, height);
    printf("The area of the Triangle is %d%c^2", area, unit);
    return 0;
}   
int areaoftriangle(int base, int height)
{
    int area = (base*height)/2;
    return area;
}
