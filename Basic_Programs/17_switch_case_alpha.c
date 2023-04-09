#include <stdio.h>
int main()
{char n;
printf("Enter Character: ");
scanf("%c",&n);
switch(n)
{
case 'A':
case 'a':
    printf("You have chosen case A ");
    break;

case 'B':
case 'b':
    printf("You have chosen case B ");
    break;

case 'C':
case 'c':
    printf("You have chosen case C ");
    break;

default:
    printf("You have not chosen case A B C ");
    break;
}
return 0;
}
