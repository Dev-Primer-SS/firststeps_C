/*
this is remaining ff.c file
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int val  = 0;
char card_name[3];
scanf("%2s",card_name);
switch (card_name[0])
{
case 'A':
	val = 11;
    break;
case 'Q':
case 'K':
case 'J':
	val = 10;
	break;
default:
    val = atoi(card_name);
}

return(0);
}