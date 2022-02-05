#include<stdio.h>
int main()
{
 int n;
 printf("Enter the length of array :");
 scanf("%d",&n);

 int arr[n];
 for(int i=0;i<n;i++)
 {
 printf("Enter the element %d ",(i+1));
 scanf("%d",&arr[i]);
 }

 printf("You Entered :");

 for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

 printf("\nAnd its address :");

 for(int i=0;i<n;i++)
  printf("%u ",&arr[i]);

 int sum =0;
 int avg;

 for(int i =0;i<n;i++)
    sum = sum + arr[i];

 avg = sum/n;
 printf("\nAverage of number(s) you entered is %d ",avg);
}
