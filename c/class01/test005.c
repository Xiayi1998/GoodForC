#include<stdio.h>
int main(){
 int n ;
 scanf("%d",&n);
  switch(n){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("weekday\n");
      break;
    case 6:
    case 7:
      printf("weekend\n");
      break;
    default:
      printf("error!!!!!\n");
      break;
  }
  return 0;
}
