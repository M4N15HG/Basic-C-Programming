#include<stdio.h>
int main()
{
int n;
printf("Enter any number : ");
scanf("%d",&n);
int i ;
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        printf("Not a Prime");
        break;

    }
}
if(i==n)
    printf("Its a Prime\n");

//*******************************//
i=1;
int j=1;
while(i++ <= 100)
{
    while(j++ <= 200)
    {
        if(j==150)
            break;
        else
            printf("%d %d   ",i,j);
    }
}

//*******************************//Break & Continue//***********//
printf("\nBreak\n");
i=1;
j=1;
for(i=1;i<=5;i++)
 {
        for(j=1;j<=5;j++)
        {
            if(i==j)
                break;
            printf("\n\n%d %d\n",i,j);
        }
 }

printf("\nContinue\n");
i=1;
j=1;
for(i=1;i<=5;i++)
 {
        for(j=1;j<=5;j++)
        {
            if(i==j)
                continue;
            printf("\n\n%d %d\n",i,j);
        }
 }

 //***************//***********************//****************

 printf("\nConditional Loops\n");

 char another;
 int num;

 do
 {
  printf("Enter a number :");
  scanf("%d",&num);
  printf("Square of %d is %d\n",num,num*num);
  printf("Want to enter another number ? (y/n) :");
  fflush(stdin);
  scanf("%c",&another);
 }while(another=='y');



another = 'y';
for(;another=='y';)
{
printf("\nEnter a number :");
scanf("%d",&num);
printf("Square of %d is %d\n",num,num*num);
printf("Want another(y/n) :");
fflush(stdin);
scanf("%c",&another);
}

}
