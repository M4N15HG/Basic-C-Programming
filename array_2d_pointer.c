#include<stdio.h>
int main()
{
int s[4][2] = {
                {1452,56},
                {7854,42},
                {8524,30},
                {7456,77}
              };
//Method One
for(int i = 0; i<4;i++)
                printf("Address of %d is %u\n",*s[i],s[i]);

// Method 2
for(int i=0;i<4;i++)
    for(int j=0;j<1;j++)
    {
        printf("%d",*(*(s+i)+j));
        printf("\n");
    }
//Method 3
printf("\n\n\n");
int (*p)[2], *pin;
for(int i =0;i<4;i++)
    {
        p = s[i];
        pin = (int*)p;
        for(int j =0;j<2;j++)
            printf(" %d ", *(pin+j));
        printf("\n");
    }


}
