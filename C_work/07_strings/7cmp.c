#include <stdio.h>
#include <string.h>

int main() {

  char s1[20] = "SDI Bhubneswar"; // string1
  char s2[20] = "Dharmendra vaishnav"; // string2
  // comparing both the strings
  if (strcmp(s1, s2) == 0) {
    printf("string 1 and string 2 are equal");
  } else {
    printf("string 1 and 2 are different");
  }
}
