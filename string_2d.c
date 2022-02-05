#include<stdio.h>
#include<string.h>
int main()
{
    char mainlist[6][15] = {
                                "Ramesh",
                                "Suresh",
                                "Mukesh",
                                "Raam",
                                "Shyam",
                                "Karan"
                            };

    char myname[15];
    printf("Enter Your Name :");
    scanf("%s",myname);
    int f;
    for(int i = 0;i<=5;i++)
    {
        f = strcmp(myname, &mainlist[i][0]);
        if(f==0)
           {
               printf("String Found\n");
               break;
           }

    }
    if(f!=0)
        printf("String Not Found\n");

 //////////////////////////// ---- Exchanging Names Using 2D Character Array

 char names[][20] = {
                                "Ramesh",
                                "Suresh",
                                "Mukesh",
                                "Ram",
                                "Shyam",
                                "Karan"
                    };

printf("Original :%s %s : \n",&names[2][0],&names[3][0]);

char t;
for(int i = 0;i<15; i++)
{
    t = names[2][i];
    names[2][i] = names[3][i];
    names[3][i] = t;
}

printf("After Exchange :%s %s : \n", &names[2][0], &names[3][0]);

////////////////////////////// Exchange Using Array of pointers.

char *names1[] = {
                                "Ramesh",
                                "Suresh",
                                "Mukesh",
                                "Ram",
                                "Shyam",
                                "Karan"

                };
printf("Original : %s %s\n", names1[1],names1[4]);
char *temp;
temp = names1[1];
names1[1] = names1[4];
names1[4] = temp;
printf("After Exchange : %s %s\n", names1[1], names1[4]);
}
