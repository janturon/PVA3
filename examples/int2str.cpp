#include <cstdio>
#include <cstring>

int main() {
  char str[16];
  int input = 42;

  // in javascript we can do str = "x" + input + "x"
  // how to do it in C? snprintf!

  str[0] = 'x';
  // now append input to str
  snprintf(str+1, 14, "%d", input); // print max 14 digits from input to str skipping the first 'x'
  strcat(str, "x"); // append "x" to the end of str
  puts(str); // x42x
}