#include<stdio.h>
#include<string.h>
void diaplay(char*,char*,int);
void diaplay1(struct book);
struct book
    {
        char name[15];
        char author[20];
        int callno;
    };
int main()
{
    struct employee
    {
        char name[15];
        int age;
        float salary;
    };
    struct employee e1 = {"Sanjay",30,19200.00};
    struct employee e2,e3;
///////////////////////////////////////////////////////////
    strcpy(e2.name, e1.name);
    e2.age = e1.age;
    e2.salary = e1.salary;

    ////////////////////////////////////////
    e3= e2;

    printf("%s %d %f\n", e1.name, e1.age, e1.salary);
    printf("%s %d %f\n", e2.name, e2.age, e2.salary);
    printf("%s %d %f\n", e3.name, e3.age, e3.salary);

    struct address
    {
        char phone[15];
        char city[15];
        int pin;
    };

    struct emp
    {
    char name[20];
    struct address a;
    };

    struct emp e = {"Mukesh","9547821364","Kolkata",152632};
    printf("Name = %s, Phone = %s \n",e.name, e.a.phone);
    printf("City = %s, PIN = %d \n",e.a.city, e.a.pin);

    /////////////////////////////////////////////////////////////////////////



    struct book b1 = {"Let Us See", "YPK",101};

    display(b1.name, b1.author, b1.callno);
    display1(b1);

}

void display(char *n, char *a, int no)
{
    printf("%s %s %d\n",n,a,no);
}

void display1(struct book b)
{
    printf("%s %s %d", b.author,b.name,b.callno);
}

