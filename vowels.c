#include<stdio.h>
void main()
{
char ch;
printf("enter character");
scanf("%c",&ch);
switch(ch)
{
case'a':
case'e':
case'i':
case'o':
case'u':printf("%c is vowel",ch);
break;
default:printf("the character is constant");
break;
}
}
