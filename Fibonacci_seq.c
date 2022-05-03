#include <stdio.h>

int main() {
  int term,number,p_temp=0;
  int temp;
  printf("enter the nth term\n");
  scanf("%d",&term);
  for(int i=0;i<term;i++)
    {
     if(i<2)
      {
        temp=i;
      continue;
      }
      if(term<2)
      {
        break;
        }
     // if(i>2){
      number=p_temp+temp;
      p_temp=temp;
        temp=number;
        
       // }
    }
  printf("number is %d",number);
  return 0;
}
