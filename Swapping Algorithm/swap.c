#include <stdio.h>

int main(){
    int x, y, temp;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    // swapping algo
    temp = x;
    x = y;
    y = temp;

    printf("x: %d \n", x);
    printf("y: %d \n", y);

    return 0;
}
