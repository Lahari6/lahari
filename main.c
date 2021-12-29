#include <stdio.h>

int main(void) 
{
  int a, b, c;
  printf("enter the angles of a triangle (in degree):\n" );
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  if (a + b + c != 180)
    printf("invalid angles\n");
    else if (a == b && b == c )
    printf("eqilateral triangle\n");
    else if (a==b || b==c || c==a)
    printf("isoseles\n");
    else
    printf("scalene\n");



  return 0;
}