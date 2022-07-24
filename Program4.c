#include<stdio.h>
int main()
{
    int n,a,b,c;
    while(1)
    {
    printf(" a. Program to Check whether a given set of three numbers are lengths of an isosceles triangle or not ");
    printf("\n b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    printf("\n c. Check whether a given set of three numbers are equilateral triangle or not");
    printf("\n d. exit\n");
    printf("Enter your choice: ");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':
            printf("Enter sides of the triangle: ");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || c==a)
                printf("Isosceles Triangle");
            else
                printf("Not Isosceles Triangle");
            break;
        case 'b':
            printf("Enter sides of the triangle: ");
            scanf("%d%d%d",&a,&b,&c);
            if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
                printf("Right Angled Triangle");
            else
                printf("Not Right Angled Triangle");
            break;
        case 'c':
            printf("Enter sides of the triangle: ");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c && a==c)
                printf("Equilateral Triangle");
            else
                printf("Not an Equilateral Triangle");
            break;
        case 'd':
            break;
    }
    printf("\n\n");
    if(n=='d')
        break;
    }
    return 0;
}
