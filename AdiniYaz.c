// BU programda adinizi yaziniz
#include <stdio.h> 
#include <stdlib.h>

int main(){
  char name[40];
  char surname[30];
  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your surname: ");
  scanf("%s", surname);
  printf("%s %s",name,surname);
  return 0;
}

  
