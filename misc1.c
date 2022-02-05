#include<stdio.h>
#include<math.h>
int main()
{
    int a = 1;
    printf("%d %d %d\n",a,++a,a++); // Value is passed Right to Left and printed left to right

    float b = 0.5;
    float w,x,y,z;

    w = sin(b);
    x = cos(b);
    y = tan(b);
    z = pow(b,2);
    printf("%f %f %f %f\n",w,x,y,z);

    int i = 10, j = 20;
    printf("%d %d %d\n",i,j); // Random number to last %d;
    printf("%d\n",i,j);

}
