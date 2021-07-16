//Write a C program using a user-defined function to find the area of a rectangle. Take input from the user.
#include <stdio.h>
int areaofrectangle();
int main()
{
    int len;
    int bred;
    char unit;
    int area;
    printf("Enter the length of the Rectangle >>");
    scanf("%d", &len);
    printf("Enter the Bredth of the Rectangle >>");
    scanf("%d", &bred);
    getchar();
    printf("Enter the Unit of measurement >>");
    scanf("%c", &unit);
    area = areaofrectangle(len, bred);
    printf("The area of the rectangle is %d%c^2", area, unit);
    return 0;
}
int areaofrectangle(int len, int bred)
{
    int area = len*bred;
    return area;
} 
