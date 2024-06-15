#include<stdio.h>
struct Stu{
    char name[20];
    int age;
    char sex[5];
    char id[15];
};
void print(struct Stu* ps){
  printf("%s %d %s %s\n",ps->name,(*ps).age,(*ps).sex,(*ps).id);
}
int main(){
  struct Stu s = {"zhangsan",20,"nan","12235425345"};

  printf("%s %d %s %s\n",s.name,s.age,s.sex,s.id);
  print(&s);
  return 0;
}
