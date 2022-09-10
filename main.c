#include<stdio.h>
int main()

{
    float basic_salary, dallownce, gross_salary, house_rent;
    
    printf("enter Basic Salary:");
    scanf("%f", &basic_salary);

    dallownce=0.4 * basic_salary;
    house_rent=0.2* basic_salary;

    gross_salary=basic_salary+dallownce+house_rent;


    printf("basic salary :  %2.f", basic_salary);
    printf("house rent :  %2.f", basic_salary);
    printf("dallowance :  %2.f", basic_salary);
    printf("gross salary:  %2.f", basic_salary);
    
    return 0;
}