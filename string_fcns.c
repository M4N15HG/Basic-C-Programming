#include<stdio.h>
#include<string.h>
int xstrlen(char *);
void xstrcpy(char *,char *);
int main()
{
    char str[] = "Banboozled";
    int len1,len2,len3;
    len1 = strlen(str);
    len2 = strlen("Hello World");
    printf("First %d\n",len1);
    printf("Second %d\n",len2);

    len3 = xstrlen(str);
    printf("Using Function Length is : %d\n",len3);
////////////////////////////////////////////////////////////////////////////////
    char src[] = "Hello Hi!";
    char trgt[20];
    strcpy(trgt,src);
    printf("Target %s\n",trgt);
    printf("Source %s\n",src);

    char src1[] = "Hello Hi Again!";
    char trgt1[20];
    xstrcpy(trgt1, src1);
    printf("Function copy : %s\n",trgt1);
    //////////////////////////////////////////////////////////////////////////

    char source[] = "Folks !";
    char target[30] = "Hello";
    strcat(target,source);
    printf("Source = %s\n",source);
    printf("Target = %s\n",target);

    //////////////////////////////////////////////////////////////////////////

    char string1[] = "Jerry";
    char string2[] = "Ferry";
    int i,j,k;
    i = strcmp(string1,"Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry Boy");
    printf("\n %d %d %d",i,j,k);

}
int xstrlen(char *ptr)
{
    int len = 0;
    for(; *ptr != '\0'; ptr++)
        len++;
    return(len);
}
void xstrcpy(char *tp, char *sp)
{
    for(;*sp!='\0';sp++,tp++)
    *tp = *sp;
    *tp = '\0';
}
