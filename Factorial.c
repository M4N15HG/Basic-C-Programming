#include<stdio.h>
int fact_sim(int);
int fact_rec(int);
int main()
{
    int n,fs,fr;
    printf("Enter the number :");
    scanf("%d",&n);
    fs = fact_sim(n);
    fr = fact_rec(n);

    printf("Factorial with simple way = %d\n",fs);
    printf("Factorial with recursion = %d\n",fr);
}
int fact_sim(int num)
{
    int f = 1;

    for(int i = 1;i<=num;i++)
    f = f*i;

    return(f);
}
int fact_rec(int num)
{
    int f = 1;
    if(num == 1)
        return(1);
    else
        f = num * fact_rec(num-1);

    return(f);
}
