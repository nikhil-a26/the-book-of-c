#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write program that reads the month and first day of the month (1 for Monday, 2 for Tuesday, and so on)
  from the user and prints the number of Sundays in that month.
  Input: two integers on a single line separated by one space, e.g. 4 6
          First integer is month, 1 for Jan, 2 for Feb, ... 12 for Jan
          Second integer is day of week, 1 for Monday, 2 for Tuesday ...
  Output: One integer showing number of sundays in that month. No newline to be printed
          In case of invalid input, print -1 as output */
  int days=0,month=0,x=0;
  scanf("%d%d",&month,&day);
  
  if(month<1 || month>12 ||day<1 ||day>7){
    printf("-1");
  }else{
     if(month==2){
       x=4;
          printf("%d",x);
     )else{
       if((month==1 || month==3 ||month==5 || month==7 ||month==8 ||month==10 ||month==12))|{
         if(( day==5 || day==6 || day==7)){
           x=5;
           printf("%d",x);
         }else{
           x=4;
           printf("%d",x);
         }
       }else if(day==6 || day==7){
         x=5;
         printf("%d",x);
       }else{
         x=4;
         printf("%d",x);
       }
     }
     }
  return 0;
  }
}
