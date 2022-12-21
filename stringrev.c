#include<stdio.h>
int main()
{
  char string[50];
  int i,j,l=0;
  printf("enter the string:\n");
  gets(string);
  for(i=0;string[i]!='\0';i++)
    l++;
  for(j=l-1;j>=0;j--)
 { string[l]='\0';
   printf("%c",string[j]);
 }
 
}
