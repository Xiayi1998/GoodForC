#include<stdio.h>
void checkNum(int num){
  if(num %2 != 0){
    printf("%d is single\n",num);
  }else{
    printf("%d is oushu\n",num);
  }
}
int main(){

  int num;
  scanf("%d",&num);
  checkNum(num);

  return 0;
}
