#include<stdio.h>

 //content of data.bin -> <BOF> 10.25, 5.54, 8.96, 12.45, 100.01 <EOF>

int main()
{
    FILE *fp;
    double val;

    fp = fopen("data.txt", "rb");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    fseek(fp, 2 * sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);

    printf("3rd rec: %.2lf", val);

    fseek(fp, -1 * sizeof(double), SEEK_END);
    fread((void *)&val, sizeof(double), 1, fp);

    fread((void *)&val, sizeof(double), 1, fp);

    printf("2nd rec: %.2lf\n", val);
    fclose(fp);

    return 0;

}
