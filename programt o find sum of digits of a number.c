// C program to find the sum of digits of a number

# include

int sum_of_digits(int n)
{
int sum = 0;
while (n != 0)
{
sum = sum + n % 10;
n = n/10;
}
return sum;
}

int main()
{
int n;
printf(“\nEnter a number : “);
scanf(“%d”,&n);
printf(“\nSum of digits of %d is %d\n”, n,sum_of_digits(n));
return 0;
}