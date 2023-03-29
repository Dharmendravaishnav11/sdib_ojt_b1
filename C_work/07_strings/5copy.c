#include <stdio.h>
#include <string.h>

int main() {

  char s1[20] = "SDI Bhubneswar";
  char s2[20];
  strcpy(s2,s1);
  printf("string s2= %s", s2);
  return 0;
}