#include <stdio.h>
int number_of_digits (int n);

{

    return floor (log 10 (n)+1);

}

int main ()
{
int n;
printf("enter the numbers");
scanf("%d",& n);

printf("enter the number of digits");
scanf("%d",& number_of_digits);

return 0;
}
