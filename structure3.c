#include<stdio.h>
struct book
{
char name[15];
char author[15];
int callno;
};
void display(struct book *);
int main()
{
    struct book b1 = {"Let us See","YPK",151};
    struct book *ptr;
    ptr = &b1;
    printf("%s %s %d\n",b1.name, b1.author, b1.callno);
    printf("%s %s %d\n",ptr->name,ptr->author,ptr->callno);
    display(&b1);

}
void display(struct book *b)
{
    printf("%s %s %d\n", b->name, b->author, b->callno);
}
