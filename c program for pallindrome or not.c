#include<stdio.h>
int main()
{
    int n, number, reverse =0, remainder;

    printf("enter an integer");
    scanf("%d",  &n);

     while(n!== 0)
     {
     remainder= n % 10;
     reverse = reverse * 10 + number;
     n= n/10;
}
if(reverse == number)
printf("%d is pallindrome ");
else
printf("%d is not pallindrome");
return 0;

}