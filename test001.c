#include<stdio.h>
int g_val = 100;
void test(){
  g_val = g_val + 1;
  printf("%d\n",g_val);
}
int main(){

  typedef unsigned int uint; 
  test();
  printf("%d\n",g_val); 
  return 0;
}
