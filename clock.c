//making of a clock;
#include<stdio.h>
#include<windows.h>
int main()
{
int h,m,s;
int d=1; //to create a gap of 1 second

printf("enter the clock time :\n");
scanf("%d%d%d",&h,&m,&s);

//error statement

if(h>12||m>60||s>60){
    printf("ERROR\n");
    exit(0);
    }
//infinity loop statement
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59){
        h++;
        m=0;
        }
        if(h>12)
        {
        h=1;
        }




    printf("the time is:\n");
    printf("%02d:%02d:%02d\n",h,m,s);
    sleep(d);
    system("cls");
}
}





