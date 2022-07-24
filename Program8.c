#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    switch(n>0)
    {
    case 1:
        printf("%d",n-n*2);
        break;
    default:
        printf("%d",n-(n*2));
    }
    return 0;
}
