//Write a C program using a user-defined function to find the area of a rectangle. Take input from the user.
#include <stdio.h>
int areaofsquare();
int main()
{
    int s;
    char unit;
    int area;
    printf("Enter the side of the Square >>");
    scanf("%d", &s);
    getchar();
    printf("Enter the Unit of measurement >>");
    scanf("%c", &unit);
    area = areaofsquare(s);
    printf("The area of the Square is %d%c^2", area, unit);
    return 0;
}
int areaofsquare(int s)
{
    int area = s*s;
    return area;
}
