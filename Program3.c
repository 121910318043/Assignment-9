#include<stdio.h>
int main()
{
    int n;
    printf("Enter a day of the week: ");
    scanf("%d",&n);
    if(n>7)
        printf("Enter valid day");
    switch(n)
    {
        case 1:
            printf("Greeting 1");
            break;
        case 2:
            printf("Greeting 2");
            break;
        case 3:
            printf("Greeting 3");
            break;
        case 4:
            printf("Greeting 4");
            break;
        case 5:
            printf("Greeting 5");
            break;
        case 6:
            printf("Greeting 6");
            break;
        case 7:
            printf("Greeting 7");
    }
    return 0;
}
