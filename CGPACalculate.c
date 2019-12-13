#include<stdio.h>

int main()
{

    cgpa();

    return 0;
}

void cgpa(double t)
{
      double s1,s2,s3,s4;
      int c1,c2,c3,c4,tc;

    printf("Enter your grade point of 4 subject\n");
    scanf("%lf %lf %lf %lf",&s1,&s2,&s3,&s4);

    printf("Enter the credit of your 4 subject\n");
    scanf("%d %d %d %d",&c1,&c2,&c3,&c4);

    double tcp;

    tc=c1+c2+c3+c4;
    tcp=s1*c1+s2*c2+s3*c3+s4*c4;
    t=tcp/tc;

    printf("Your CGPA is %.2lf\n",t);
}
