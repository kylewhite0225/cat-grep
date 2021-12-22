#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen(argv[2], "r");
  if (fp == NULL) {
    printf("Invalid file.\n");
    exit(1);
  }
  int bufferLen = 255;
  char buffer[bufferLen];
  while (fgets(buffer, bufferLen, fp)) {
    if (strstr(buffer, argv[1])) {
      printf("%s", buffer);
    }
  }
  fclose(fp);
  exit(0);
}
