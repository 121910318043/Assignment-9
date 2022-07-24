#include<stdio.h>
int main()
{
    int n;
    printf("Enter an Even number: ");
    scanf("%d",&n);
    if(n%2)
    {
        printf("%d",n);
    }
    else{
    switch(n>0)
    {
    case 1:
        printf("%d",n+1);
        break;
    }
    }
    return 0;
}
