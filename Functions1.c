#include<stdio.h>
void message(); // Function Declaration
int main()
{
printf("Inside main\n");
message(); // Function Call
printf("Inside main again\n");
}
void message() // Function Definition
{
    printf("Inside function\n");
}
