# codsimp
#include<stdio.h>
#include<conio.h>
void main()
{
 int num,arm=0,mod,realnum;
 printf("\nEnter the number");
 scanf("%d",&num);
 realnum=num;
 while(num!=0)
 {
  mod=num%10;
  arm=arm*1+mod*mod*mod;
  num=num/10;
 }
 printf("Output:%d",arm);
 if(arm==realnum)
  printf("\nThe given number is armstrong number");
 else
  printf("\nThe given number is not armstrong number");
}
