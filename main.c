#include <stdlib.h>
#include <stdio.h>

void loop();

int main(int agrc, char **argv) {
  printf("The number of arguements is: %d\n", agrc);
  loop();
  return EXIT_SUCCESS;
}

void loop() {
  char cmd[20];
  printf("> ");
  scanf("%s", cmd);
  printf("The command you entered is %s.", cmd);
}
