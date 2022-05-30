///C program to toggle case of each character in a string

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Toggle case function declaration */
void toggleCase(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}
