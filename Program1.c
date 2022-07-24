#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number: ");
    scanf("%d",&n);
    if(n<1 && n>12)
        printf("Please enter a valid month number");
    else
        switch(n)
    {
    case 4:
        printf("30 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 2:
        printf("28 days");
        break;
    default:
        printf("31 days");
    }
    return 0;
}
