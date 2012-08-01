#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, const char* argv[]) {
  pid_t pid;
  char *message;
  int n;

  printf("fork programming starting\n");
  pid = fork();
  switch(pid)
  {
  case -1:
    perror("fork faild");
    exit(0);

  case 0:
    message = "This is the child";

  }
  return 0;
}