#include <stdio.h>
#include <string.h>

int main() {

  char s1[20] = "SDI Bhubneswar";
  int i,length=0;
  for (i = 0; s1[i] != '\0'; i++)
  {
     length++;
  }

  printf("Length of the string is:%d",length);
  return 0;
}