#include<stdio.h>
int main()

{
    int a, b;

    printf("enter a number:");
    scanf("%d",&a);

    printf("enter a second number:");
    scanf("%d",&b);


   int temp= a;
   a    =    b;
   b    = temp;

   printf ("after swap %d %d", a,b);
 
   return 0;


}