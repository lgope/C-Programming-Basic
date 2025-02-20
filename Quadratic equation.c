#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, discriminant;
    float root1, root2;
    printf("Input values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    if(discriminant < 0)
    {
        printf("\n\nRoots are imaginary\n");
    }
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2.0*a);
        root2 = (-b - sqrt(discriminant)) / (2.0*a);
        printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n", root1, root2);
    }
    return 0;
}
