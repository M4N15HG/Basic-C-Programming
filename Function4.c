#include<stdio.h>
float square(float);
void swapv(int,int);
int main()
{
    float a,b;
    printf("Enter any number :");
    scanf("%f",&b);
    a = square(b);
    printf("Square of %f is %f\n",b,a);

    int x =10,y=20;
    swapv(x,y);
    printf("A = %d B = %d\n",x,y);

}
float square(float b)
{
    float a;
    a = b*b;
    return(a);
}
void swapv(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("A = %d B = %d\n",a,b);

}
