# codsimp
#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,out;
 printf("Enter the number");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  out=num*i;
  printf("\n%d*%d=%d",num,i,out);
 }
}
