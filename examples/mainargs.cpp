#include <cstdio>

int str2int(const char* str) {
  int result = 0;
  sscanf(str, "%d", &result);
  return result; // will return 0 if str is not a number
}

int main(int argc, char* argv[]) {
  int result = 0;

  for(int i=0; i<argc; ++i) {
    result+= str2int(argv[i]);
  }

  printf("%d\n", result);
}