#include <stdio.h>

int main()
{//goto statement used to control the flow of code
//can jump forward and backward
//start==  goto label; end==label:
int age;
g:
  printf("Above 18 Eligible\n");
s:
  printf("Below 18 Not Eligible\n");

printf("Enter age: \n");
scanf("%d", &age);
if (age > 18)
  {goto g;}
else if(age < 18)
  {goto s;}
else
  {goto e;
  e:
  printf("The End Of Program");}
return 0;
}
