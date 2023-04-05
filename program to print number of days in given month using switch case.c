#include<stdio.h>

void printNumberOfDays(int N)

{
    switch(N)
{
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
 printf("31 Days");
 break;

 // cases for 30 days

 case 4 :    
 case 6 :    
 case 9 :    
 case 11 : 

 printf("30 Days");
 break;

 //cases for 28/29 days

 case 2:
 printf("28/ 29 Days");
 break;

 deafault:
 printf("invalid month");
 break;   
}
}

//driver code

int main()
{
    int N = 4;
    printNumberOfDays(N);
    return 0;
}
