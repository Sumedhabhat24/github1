#include<stdio.h>
int main()
{
  char string[50];
  int i,j,l=0;
  printf("enter the string:\n");
  gets(string);
  for(i=0;string[i]!='\0';i++)
    l++;
  for(j=l-1,i=0;j>=0,string[i]!='\0';i++,j--)
 { if(string[j]!=string[i])
     break;
 }
 if(i==l)
  printf("Plaindrome\n");
 else 
   printf("Not a palindrome\n");

}

