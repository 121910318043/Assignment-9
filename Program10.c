#include<stdio.h>
#include<math.h>
int main()
{
    int D,a,b,c;
    float r1,r2;
    printf("Enter a b c values: ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0)
    {
    case 1:
        r1=(-b+sqrt(D))/(2.0*a);
        r2=(-b-sqrt(D))/(2.0*a);
        printf("roots are Real and Distinct roots = %f ,%f",r1,r2);
        break;
    case 0:
        {
        switch(D==0)
        {case 1:
            r1=-b/(2.0*a);
            printf("Equal roots = %f",r1);
            break;
        case 0:
            printf("Imaginary roots");
            break;
        }
        }
    }
    return 0;
}
