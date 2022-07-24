#include<stdio.h>
int main()
{
    int a,b,n;
    while(1)
    {
    printf("\n a.addition");
    printf("\n b.subtraction");
    printf("\n c.Multiplication");
    printf("\n d.Division");
    printf("\n e.exit \n");

    printf("Enter your choice: ");
    scanf("%c",&n);
    fflush("stdin");
    {
    switch(n)
    {
        case 'a':
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("The addition of %d and %d = %d\n",a,b,a+b);
            break;
        case 'b':
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("The subtraction of %d and %d = %d\n",a,b,a-b);
            break;
        case 'c':
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("The Multiplication of %d and %d = %d\n",a,b,a*b);
            break;
        case 'd':
            printf("Enter two numbers ");
            scanf("%f%f",&a,&b);
            printf("The division of %d and %d = %d\n",a,b,a/b);
            break;
        case 'e':
            break;
    }
    }
    if(n=='e')
        break;
    }
    return 0;
}
