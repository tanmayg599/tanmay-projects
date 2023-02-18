//billing System
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
char str[20];
int hr,min,day,mon,yr,cnum;
printf("                                          XXXX WELCOMES YOU\n");
printf("**********************************************************************************************************************\n");
printf("TIME:");
scanf("%d:%d",&hr,&min);
printf("DATE:");
scanf("%d/%d/%d",&day,&mon,&yr);
printf("customer name:\n");
scanf("%s",str);
printf("customer phone number:");
scanf("%d",&cnum);
printf("**********************************************************************************************************************\n");

int sugar,flour,shampoo,brush,toothpaste;

printf("sugar:");
scanf("%d",&sugar);
printf("flour:");
scanf("%d",&flour);
printf("shampoo:");
scanf("%d",&shampoo);
printf("brush:");
printf("%d",&brush);
printf("toothpaste:");
printf("%d",&toothpaste);


int tot,sh,s,f,b,t;
b=brush*50;
sh=shampoo*100;
s=sugar*1800;
f=flour*1500;
t=toothpaste*100;
tot=b+sh+s+f+t;


printf("items               units               rate               total\n");
printf("SUGAR               %d                  1800               %d\n",sugar,s);
printf("SHAMPOO             %d                   100               %d\n",shampoo,sh);
printf("FLOUR               %d                  1500               %d\n",flour,f);
printf("BRUSH               %d                    50               %d\n",brush,b);
printf("TOOTHPASTE          %d                   100               %d\n",toothpaste,t);
printf("total payable amount is %d\n",tot);
printf("thank you for visiting XXX\n");


return 0;
}
