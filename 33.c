#include<stdio.h>
void main()
{
char s,i,count=0;
printf("enter a line");
scanf("%s",s);
for(i=0;s[i]='\0';i++)
{
if(s[i]==' ')
{
count++;
}
printf("%d",count);
}
