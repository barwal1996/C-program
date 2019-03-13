#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
 {


   int i=0,a,b;
   double c,e,d;
   char str,str1,str2;
   printf("Enter integers ");
   scanf("%d %d",&a,&b);
   i=a+b;
   printf("sum of int numbers is ", &i);

   printf("Enter double numbers ");
   scanf("%f %f",&c,&e);
   d= c+e;
   printf("Sum of double is ",&d);

   printf("Enter string to concatenate");
   gets(str1);
   gets(str2);
   str= strcat(str1,str2);
   printf("Concatenated strings is ",str);

}
