#include<Stdio.h>

// function for checking the number is prime or not //

voidCheckprime(int N) 
{
    // initialize flag = 1 or true//
    int flag =1 ;

}

// if N is totally divisible by 0 then it means it is 0 or false
for(i = 2 ; i<= N/2 ;  i++){
    
    if(N% i ==0)
    {
        flag== 0;
break;

    }
    if(flag)
    {
        printf("the given number is prime");

    }
    else{
        printf("the given number is not prime");
    }
}

// driver code //

int main()

{
    int N =546;
checkPrime(N);

}