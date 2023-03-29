#include <stdio.h>
#include <string.h>

int main() {

  char s1[20] = "SDI Bhubneswar";
  char s2[20];
  for (int i = 0; i < 20; i++)
  {
     s2[i]=s1[i];
  }

  printf("string s2= %s", s2);
  return 0;
}