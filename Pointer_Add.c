#include<stdio.h>
int main()
{
    int i = 3, *x;
    float j = 1.5, *y;
    char k = 'c', *z;

    printf("Value of i = %d\n",i);
    printf("Value of j = %f\n",j);
    printf("Value of k = %c\n",k);

    x = &i;
    y = &j;
    z = &k;

    printf("Original Address in x = %u\n",x);
    printf("Original Address in y = %u\n",y);
    printf("Original Address in z = %u\n",z);

    x++;
    y++;
    z++;

    printf("New Address in x = %u\n",x);
    printf("New Address in y = %u\n",y);
    printf("New Address in z = %u\n",z);

    int a = 4,*b,*c;
    char *d;
    b = &a;
    printf("A = %d\n",a);
    printf("B = %u\n",b);
    printf("C = %u\n",c);
    printf("D = %u\n",d);

    b = b+9;
    c = c+3;
    d = d+2;
    printf("B + 9 = %u\n",b);
    printf("C + 3 = %u\n",c);
    printf("D + 2 = %u\n",d);


}
