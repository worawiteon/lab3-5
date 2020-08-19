#include <stdio.h>
int main(void)
{
  float b, h;
  printf("Enter B : ");
  scanf("%f", &b);
  printf("Enter H : ");
  scanf("%f", &h);
  printf("%f * %f = %f", b, h, b*h*0.5);
  return 0;
}
