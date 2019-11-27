#include <cstdio>
#include <cstring>

int main() {
  char input[] = "42"; // try to change this to "hammer"
  int output;

  // in javascript we can use output = input*2;
  // how to do it in C? sscanf!

  if(sscanf(input, "%d", &output)==1) {
    printf("%d\n", 2*output);
  }
  else {
    puts("NaN"); // Not a Number
  }
}