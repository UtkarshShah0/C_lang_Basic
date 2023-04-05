#include <stdio.h>

int main()
{
int x=5;
x+=3;
x-=1;
x*=2;
x/=2;
x%=2;

printf("the value of x is: %d\n\n",x);
//Logical Operators
/*
&& = logical AND
|| = logical OR
! = logical NOT
*/
int a=9;
if (a>5 && a<10){
  printf("the value is %d greater than 5 and less than 10\n\n",a);
}

return 0;}
