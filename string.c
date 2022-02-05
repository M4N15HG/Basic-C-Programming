#include<stdio.h>
int main()
{
    char name[] = "Hello World";
    printf("%s\n",name);

    for(int i=0;i<20;i++)
        printf("%c",name[i]);

        printf("\n");

    for(int i=0;name[i] != '\0';i++)
        printf("%c",name[i]);

        printf("\n");

    char *ptr;
    ptr=name;

    for(;*ptr != '\0';ptr++)
        printf("%c",*ptr);

        printf("\n");

    char naam[20];
    printf("Enter a String :");
    scanf("%s",naam);
    printf("Hello %s\n",naam);

    char str[20];
    printf("Enter Full get  Name :");
    fflush(stdin);
    gets(str);
    puts(str);

    char noom[20];
    printf("Enter a 2 word  String :");
    fflush(stdin);
    scanf("%[^\n]s",&noom);
    printf("Hello %s\n",noom);

}
