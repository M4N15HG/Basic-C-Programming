#include<stdio.h>
int main()
{
    int i=2;
    switch(i)
    {
    case 1:
        printf("In Case 1\n");
    case 2:
        printf("In Case 2\n");
    case 3:
        printf("In Case 3\n" );
    default:
        printf("In Default\n");
    }

    //****************************//
    switch(1)
    {
    case 1:
        printf("In Case 1\n");
        break;
    case 2:
        printf("In Case 2\n");
        break;
    case 3:
        printf("In Case 3\n" );
        break;
    default:
        printf("In Default\n");
    }
//***********************************************//******************************//
char c = 'x';
switch(c)
{
case 'v':
    printf("In V");
    break;
case 'a':
    printf("In A");
    break;
case 'x':
    printf("In X");
    break;
default:
    printf("In Default");
}
///////////////***********************************************

char ch;
printf("\nEnter a,b or c :\n");
scanf("%c",&ch);

switch(ch)
{
    printf("This Part is not Processed");
case 'a':
case 'A':
    printf("Entered A");
    break;
case 'b':
case 'B':
    printf("Entered B");
    break;
case 'c':
case 'C':
    printf("Entered C");
    break;
default:
    printf("In Default");
}


}
