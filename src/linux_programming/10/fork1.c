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
    exit(1);
  case 0:
    message = "This is the child";
    n = 5;
    break;
  default:
    message = "This is the parent";
    n = 3;
    break;
  }

  for (; n > 0; n--) {
    puts(message);
    sleep(1);
  }
  exit(0);
}