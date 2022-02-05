#include<stdio.h>
int calc(int,int,int);
int fun();
int main()
{
int a,b,c ,sum, n;
printf("Enter 3 Numbers : ");
scanf("%d %d %d",&a,&b,&c);
sum = calc(a,b,c);
printf("\nSum = %d\n",sum);

n = fun();
printf("\nYou Entered %d\n",n);

}
int calc(int x,int y,int z)
{
    int d;
    d = x+y+z;
    printf("Inside Function 1\n");
    return(d);
}

int fun()
{   printf("\nIn 2nd Function\n");
    int n;
    printf("\nEnter a Number : ");
    scanf("%d",&n);
    if(n>=10 && n<=90)
        return(n);
    else
        return(n+32);
}
