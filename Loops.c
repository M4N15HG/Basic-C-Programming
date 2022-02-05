#include<stdio.h>
int main()
{
    // WHILE LOOPS
    printf("While Loop\n");
    int i = 1;

    // Simple Example
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }

    //SI Program
    int count, j=1;
    printf("Number of Entries for SI: ");
    scanf("%d",&count);
    int p,t;
    float r,si;
    while(j<=count)
    {
    printf("Enter Principle, time and rate :");
    scanf("%d %d %f",&p,&t,&r);
    si = p*r*t/100;
    printf("Your SI : %f \n",si);
    j++;
    }

    //Decrement in loop
    i = 10;
    while(i>=1)
    {
    printf("%d\n",i);
    i--;
    }

    // Float in a loop
    float k = 5.5;
    while(k>=0.5)
    {
    printf("%f\n",k);
    k-=0.5;
    }

    // Pre-Increment and Post Increment Operators

    i = 0;
    while(i++ <= 10) // First checked then incremented : Post Increment
    {
        printf("%d\n",i);
    }

    i = 0;
    while(++i <= 10) // First incremented then checked : Pre Increment
    {
        printf("%d\n",i);
    }

    // FOR LOOPS
    printf("\n\n FOR LOOPS \n\n");

    for(i=1;i<=10;i++)
        printf("%d\n",i);

    for(i=1;i<=10;)
    {
        printf("%d\n",i);
        i++;
    }

    i=1;
    for(;i<=10;i++)
    printf("%d\n",i);

    i =1;
    for(;i<=10;)
    {
        printf("%d",i);
        i++;
    }

    for(i=1;i++<=10;) //Post Increment
        printf("\n%d",i);


    printf("Nesting of LOOPS\n");
    int ro,c,sum;

    for(ro=1;ro<=3;ro++)
    {
        for(c=1;c<=2;c++)
        {
        sum = c+ro;
        printf("r=%d c=%d sum=%d\n",ro,c,sum);
        }
    }

    // DO WHILE
    printf("Do While Loop\n");
    i=1;
    do{
        printf(" %d ",i);
        i++;
    }while(i<=10);

}

