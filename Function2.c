#include<stdio.h>
void italy();
void brazil();
void argentina();
int main()
{
    printf("In Main\n");
    italy();
    printf("Back in Main");
}
void italy()
{
    printf("In Italy\n");
    brazil();
    printf("Back in Italy\n");
}
void brazil()
{
    printf("In Brazil\n");
    argentina();
    printf("Back in Brazil\n");
}
void argentina()
{
    printf("In argentina\n");
}
