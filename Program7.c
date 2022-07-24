#include<stdio.h>
int main()
{
    int n,e,s;
    printf("Enter electricity unit charges ");
    scanf("%d",&n);
    switch(n)
    {
    case 0 ... 50:
        e = (0.50 * n);
        s = e + ( e * (20.0/100));
        printf("electricity bill Rs %d/-",s);
        break;
    case 51 ... 150:
        e = (0.75 * (n-50))+(25);
        s = e + ( e * (20.0/100));
        printf("electricity bill Rs %d/-",s);
        break;
    case 151 ... 250:
        e = (1.20 * (n-150))+(75)+(25);
        s = e + ( e * (20.0/100));
        printf("electricity bill Rs %d/-",s);
        break;
    default:
        e = (1.50 * (n-250))+(120)+(75)+(25);
        s = e + ( e * (20.0/100));
        printf("electricity bill Rs %d/-",s);
        break;
    }
    return 0;
}
