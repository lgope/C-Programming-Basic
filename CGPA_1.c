#include<stdio.h>
void main()
{
    int i,subj,stu,j=1;
    float gpa,cre,cgpa,tcre=0,tcgpa=0,fcgpa,a[20];

    printf("how many student?\n");
    scanf("%d",&stu);

    for (i=0; i<stu; i++)
    {
        printf("how many subject for each student?\n");
        scanf("%d",&subj);

        for(i=0; i<subj; i++)
        {
            printf("number %d subject gpa \n",j);
            scanf("%f",&gpa);

            printf("number %d subject credit \n",j);
            scanf("%f",&cre);

            cgpa=gpa*cre;
            tcre=tcre+cre;

            tcgpa=tcgpa+cgpa;
            j++;
        }
        //fcgpa=tcgpa/tcre;
    }
}
