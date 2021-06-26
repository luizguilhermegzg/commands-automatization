#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char session[256];
  char attach_command[270] = "tmux attach-session -t ";
  printf("\n\n");
  system("tmux ls");
  printf("----------------------------------------------------------------------------\n");
  printf("Which session can you attach: ");
  fgets(session, sizeof(session), stdin);
  strcat(attach_command, session);
  system(attach_command);
  return 0;

}
