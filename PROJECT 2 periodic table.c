//  PROJECT 2
//  periodic table elements

int main()
{
    int n,m,a,exit;

    printf("welcome to the world of periodic table\n");
    printf("press 1 to know about the ppts of elements\n");
    printf("press 0 to escape the process\n");
    scanf("%d",&n);

    if(n==1)
    {
    printf("enter 2 to know more about the element by its atomic number\n");
    printf("enter 3 if you dont want to know about it\n");
    scanf("%d",&m);
    if(m==2)
        {
        printf("enter the atomic number of any element whose atomic number is between 1 and 5\n");
        scanf("%d",&a);
        if(a==1)
            {
            printf("name of the element:hydrogen\n");
            printf("symbol:H");
            printf("electronic configuration:1s^1\nthankyou\n");
            }
        else if(a==2)
            {
            printf("name of the element:helium\n");
            printf("symbol:He\n");
            printf("electronic configuration:1s^2\nthankyou\n");

            }
        else if(a==3)
            {
            printf("name of the element:lithium\n");
            printf("symbol:Li\n");
            printf("electronic configuration:1s^2,2s^1\nthankyou\n");

            }
         else if(a==4)
            {
            printf("name of the element:berilliyum\n");
            printf("symbol:Be\n");
            printf("electronic configuration:1s^2,2s^2\nthankyou\n");

            }
         else if(a==5)
            {
            printf("name of the element:boron\n");
            printf("symbol:B\n");
            printf("electronic configuration:1s^2,2s^2,2p^1\nthankyou\n");

            }
            else
            {
                printf("please enter the atomic number in the given range\n");
                 scanf("%d",&a);
        if(a==1)
            {
            printf("name of the element:hydrogen\n");
            printf("symbol:H");
            printf("electronic configuration:1s^1\nthankyou\n");
            }
        else if(a==2)
            {
            printf("name of the element:helium\n");
            printf("symbol:He\n");
            printf("electronic configuration:1s^2\nthankyou\n");

            }
        else if(a==3)
            {
            printf("name of the element:lithium\n");
            printf("symbol:Li\n");
            printf("electronic configuration:1s^2,2s^1\nthankyou\n");

            }
         else if(a==4)
            {
            printf("name of the element:berilliyum\n");
            printf("symbol:Be\n");
            printf("electronic configuration:1s^2,2s^2\nthankyou\n");

            }
         else if(a==5)
            {
            printf("name of the element:boron\n");
            printf("symbol:B\n");
            printf("electronic configuration:1s^2,2s^2,2p^1\nthankyou\n");

            }



            }
    }



    else if(n==0)
        {
         printf("you are not interested in the elements\nthankyou\n");
        }

         else
        {
            printf("!!!!!!!please enter a number from the provided ones only!!!!!!\n");

        }




}
}
