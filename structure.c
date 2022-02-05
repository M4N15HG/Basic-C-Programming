#include<stdio.h>
int main()
{
        struct book
        {
            char name[15];
            int page;
            float price;
        };
        struct book b1,b2,b3 ;

        printf("Enter Name, Pages, Price : ");

        scanf("%s %d %f",&b1.name,&b1.page,&b1.price);
        scanf("%s %d %f",&b2.name,&b2.page,&b2.price);
        scanf("%s %d %f",&b3.name,&b3.page,&b3.price);

        struct book b4 = {"Hello",1254,300.50};
        struct book b5 = {"World",1520,400};
        struct book b6 = {0};

        printf("You Entered :\n");
        printf("%s %d %f\n",b1.name,b1.page,b1.price);
        printf("Address of elements : %u %u %u\n",&b1.name, &b1.page, &b1.price);
        printf("%s %d %f\n",b2.name,b2.page,b2.price);
        printf("%s %d %f\n",b3.name,b3.page,b3.price);
        printf("%s %d %f\n",b4.name,b4.page,b4.price);
        printf("%s %d %f\n",b5.name,b5.page,b5.price);
        printf("%s %d %f\n",b6.name,b6.page,b6.price);


        struct book b[3];
        for(int i = 0; i<3; i++)
        {
            printf("Enter Name Pages and Price :");
            fflush(stdin);
            scanf("%s %d %f",&b[i].name, &b[i].page, &b[i].price);
        }
printf("You Entered : \n");
        for(int i = 0; i<3; i++)
        {

            printf("%s %d %f\n",b[i].name, b[i].page, b[i].price);
        }

}
