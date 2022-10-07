#include <stdio.h>

int main() {

  double a, b, c;

  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (a >= b && a >= c)
    printf("%.2f is the largest number.", a);

  // if n2 is greater than both n1 and n3, n2 is the largest
  else if (b >= a && b >= c)
    printf("%.2f is the largest number.", b);

  // if n3 is greater than both n1 and n2, n3 is the largest
  else if (c >= a && c >= b)
    printf("%.2f is the largest number.", c);

  return 0;
}