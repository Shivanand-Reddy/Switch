//# Switch
//Created by Shivanand reddy
#include<stdio.h>
void main()
{
 int o;
 printf(" Enter the order number\n");
 scanf("%d",&o);
 switch(o)
 {
  case 1 :printf("Food item- Burger \nPrice-RS 129\n");
   break;
  case 2 :printf("Food item- French Fries \nPrice-Rs 99\n");
   break;
  case 3 :printf("Food item- Pizza \nPrice-RS 239\n");
   break;
  case 4 :printf("Food item- Sandwich \nPrice-RS 149\n");
   break;
  case 5 :printf("Food item- Pasta \nPrice- RS 179\n");
   break;
  default:printf("Choice other than availability\n");
 }
return 0;
}
