#include<stdio.h>
int main()
{
    int n;
    printf("Enter an year: ");
    scanf("%d",&n);
    switch(n%400)
    {
    case 0:
        printf("leap year");
        break;
    default:
        {
            switch(n%100)
            {
            case 0:
                printf("not a leap year");
                break;
            default:
                {
                    switch(n%4)
                    {
                    case 0:
                        printf("Leap year");
                        break;
                    default:
                        printf("Not a Leap year");
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

