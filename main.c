/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
float basic,hra,da,total_salary;
printf("enter basic salary");
scanf("f",&basic);
hra=0.20*basic;
da=1.50*basic;
total_salary=basic+hra+da;
printf("basic salary:%2f\n",basic);
printf("hra(20%%of basic salary):%2f\n",hra);
printf("da(150%%of basic salary):%2f\n",da);
printf("total_salary:%2f\n",total_salary);

return 0;
}
