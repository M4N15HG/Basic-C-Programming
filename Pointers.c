#include<stdio.h>
int main()
{
    int i = 3;
    printf("Address of i is %u\n",&i);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*(&i));

  //int i = 3; // Aready Done
    int *j;
    j = &i;
    printf("Address of i = %u\n",&i);
    printf("Address of i = %u\n",j);
    printf("Address of j = %u\n",&j);
    printf("Value of j = %u\n",j);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*j);
    printf("Value of i = %d\n",*(&i));

    printf("\n\nPointer to a Pointer\n\n");

  //int i; // Already Done
  //int *j; // Already Done
    int **k;
  //j =&i; // Already Done
    k = &j;
    printf("Address of i = %u\n",&i);
    printf("Address of i = %u\n",j);
    printf("Address of i = %u\n",*k);
    printf("Address of j = %u\n",&j);
    printf("Address of j = %u\n",k);
    printf("Address of k = %u\n",&k);

    printf("Value of j = %u\n",j);
    printf("Value of j = %u\n",*k);
    printf("Value of k = %u\n",k);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*j);
    printf("Value of i = %d\n",**k);
    printf("Value of i = %d\n",*(&i));
}
