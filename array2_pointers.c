#include<stdio.h>
void disp(int *,int);
int main()
{
    int arr[] = {10,20,30,45,67,56,74};
    int *i,*j;

    i = &arr[1];
    j = &arr[5];

    printf("%d %d\n",j-i,*j-*i);

    int num[] = {24,34,12,44,56,17};
    int x,*y;

    y = &num[0];
    for(int a=0;a<=5;a++)
    {
        printf("address = %u",y);
        printf(" element = %d\n",*y);
        y++;

    }

    disp(&num[0],6);
    disp(num,6);


 for(int m = 0;m<6;m++) // Another way of representation
  {
   printf("address = %u element = %d %d %d %d\n",&num[m], num[m], m[num], *(num+m),*(m+num));
  }



}
void disp(int *j, int n)
{
for(int i = 0; i<n; i++,j++)
    printf("Element = %d\n",*j);
}
