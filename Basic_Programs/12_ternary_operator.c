#include <stdio.h>

int main()
{ /* TERNARY OPERATOR
if (a>b){
  max=a;}
else{
  max=b;}

varaiable = binary condition ? value if TRUE :value if FALSE ;
*/

int a = 100,b = 34;
int max;

max = (a>b) ? a:b ;
printf("The max value is %d",max);


return 0;}
