#include<stdio.h>
int main()
{
    int stud[3][2];
    for(int i =0; i<3;i++)
    {
        printf("Enter Roll and Marks : ");
        scanf("%d %d",&stud[i][0],&stud[i][1]);
    }
    for(int i=0;i<3;i++)
        printf("You Entered :%d %d\n",stud[i][0],stud[i][1]);


    int student[][2] = {
        {145,65},
        {548,20},
        {632,74}

    };

}
