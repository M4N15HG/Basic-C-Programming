#include<stdio.h>
void swapr(int *,int *);
void circle(float, float *,float *);
int main()
{
    int a = 10, b = 20;
    printf("Value Before A = %d B = %d\n",a,b);
    swapr(&a,&b);
    printf("Value After  A = %d B = %d\n",a,b);

    float r, peri, area;
    printf("Enter the Radius of Circle : ",r);
    scanf("%f",&r);
    circle(r,&peri,&area);
    printf("Area and Perimeter of Circle with radius %f are %f and %f",r,area,peri);
}
void swapr(int *i,int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void circle(float rad,float *p, float *a)
{
    *p = 2*3.14*rad;
    *a = 3.14*rad*rad;
}
