// 7. Write a C program to check whether a year is leap year or not using if-else statement.

#include <stdio.h>
int main(){
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) printf("Leap Year\n");
    else printf("Not a Leap Year\n");
    return 0;
}