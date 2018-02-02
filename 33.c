
#include<stdio.h>
#include<string.h>
int main()
{
char s[10]="hai hello";
int i,b,a=0;
b=strlen(s);
for(i=0;i<=b;i++)
{
if(isspace(s[i]))
{
a++;
}
}
printf("%d",a+1);
return 0;
}
