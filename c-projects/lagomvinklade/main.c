#include <stdio.h>
#include <math.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main(void) {
  const int n = 3000;
  int c = 0;
  int a, b;

  for (a = 1; a < n+1; a++) {
    for (b = a; b < min(a*a+1, n+1); b++) {
      if (floor(sqrt(a*a+b*b-a*b)) == ceil(sqrt(a*a+b*b-a*b))) {
        c++;
      }
    }
  }

  printf("%d\n", c);
  return 0;
}