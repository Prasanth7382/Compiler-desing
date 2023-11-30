#include <stdio.h>

int calculateRectangleArea(int length, int width) 
{
    return length * width;
}

int main() {
    int a = 5, b = 3, c = 2, result;

    printf("Given values: a = %d, b = %d, c = %d\n\n", a, b, c);

    printf("Operator Precedence Example:\n");
    printf("Step 1: a + b * c\n");
    result = a + b * c;
    printf("Result: %d\n\n", result);

    printf("Other Parts of the Program:\n");

    int length = 10, width = 4;
    int area = calculateRectangleArea(length, width);
    printf("The area of the rectangle with length %d and width %d is: %d\n", length, width, area);


    return 0;
}
