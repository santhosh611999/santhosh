#include<stdio.h>
void main() {
    int num;
   printf("Enter an number :");
   scanf("%d",&num);
   if(num==0)
   {
       printf("zero");
   }
       else if(num>0)
       {
           printf("positive");
       }
       else if(num<0)
       {
           printf("negative");
       }
       } 
