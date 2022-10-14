#include<stdio.h>

int main();

{

int a, b, c;
printf("enter three numbners :");
scanf("%d %d %d, &a, &b, &c ");

int max = 0;

max =((a>b) && (a>c ) ? a : (b> a) && (b> c) ? b : (c>a) && (c>b) ? c ;

printf("the largest among three among three numbers is % d ", max);
printf("/n");
}