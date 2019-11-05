#include<stdio.h>
#include<ctype.h>
void main()
{
char a[10];
int flag,i=1;
printf("\nEnter an Identifier");
scanf("%s",a);
if(isalpha(a[0]) || a[0]=='_')
flag=1;
else
{
flag=0;
}
while(a[i]!='\0')
{
if(!isdigit(a[i])&&!isalpha(a[i])&&a[i]!='_')
{
flag=0;
break;
}
i++;
}
if(flag==1)
printf("\nValid Identifier\n");
else
printf("\nNot a valid Identifier\n");
}
