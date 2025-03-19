#include<stdio.h>
int main ()
 {
 int num ,n , toggled_num;
 printf("enter any number : ");
 scanf("%d", &num);
 printf("enter nth bit to toggle (0-30) : ");
 scanf("%d" , &n);
 toggled_num = num ^ (1<<n);
 printf("number before toggling %d bit : %d \n" , n ,num );
 printf("number after toggling %d bit : %d\n" , n,toggled_num);
 }
