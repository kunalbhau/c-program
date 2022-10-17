#include<stdio.h>
int number_of_digits(int n)

{
    if (n == 0)
return 0;
while (n ! =0)

    {
        return 1 +  number_of_digits(n/10);
        
    }
   
}
int main ()
{
int n ;

pritnf("enter the number ");
scanf("%d", &n);

pritnf("number of digits");
scanf("%d", & number_of_digits);

retun 0;
}