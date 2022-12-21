#include<stdio.h>
int main()
{
  int num,r=0,digit,temp;
  printf("Enter the number:\n");
  scanf("%d",&num);
  temp=num;
  while(num!=0)
  {
   digit=num%10;
   r=r*10+digit;
   num=num/10;
  }
  if(r==temp)
  printf("Palindrome\n");
  else
   printf("Not a palindrome\n");
}
