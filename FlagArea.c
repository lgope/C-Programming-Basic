#include<stdio.h>

float areaofFlag(float length)
{
  float width,area;
  width=(6*length)/10;
  area=length*width;

  return area;
}

int main()
{
  float length,area;
  scanf("%f",&length);
  area=areaofFlag(length);
  printf("Area of Flag is = %.2f\n", area);
  return 0;
}
