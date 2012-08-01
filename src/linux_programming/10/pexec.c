#include <stdio.h>
#include <unistd.h>

int main(int argc, const char* argv[]) {
  printf("Running ps with execlp\n");
  execlp("ps", "ps", "-ax", 0);
  printf("Done. \n");
  exit(0);

}