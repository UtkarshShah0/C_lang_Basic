#include <stdio.h>
int main()
{int n;
printf("Enter The Number: ");
scanf("%d",&n);
switch(n)
{
case 1:
    printf("You have chosen case 1 ");
    break;

case 2:
    printf("You have chosen case 2 ");
    break;

case 3:
    printf("You have chosen case 3 ");
    break;

default:
    printf("You have not chosen case 1 2 3 ");
    break;
}
return 0;
}
