#include <stdio.h>
void strSwap( char *s1, char *s2);
void main()
{
char str1[] = "Hi, bro";
char str2[] = "Hi, friend";
printf("바꾸기전\n");
printf("%s\n", str1);
printf("%s\n\n", str2);
printf(str1, str1);
printf("바꾼후\n");
printf("%s\n", str1);
printf("%s\n", str2);
}
void strSwap( char *s1, char *s2)
{
char *tempStr1 = s1;
char *tempStr2 = s2;
shile(*tempStr1 !=0 && *tempStr2 !=0)
{
char tempCh = *tempStr1;
*tempStr1=*tempStr2;
*tempStr2=*tempCh;
tempStr1++;
tempStr2++;
}
}
