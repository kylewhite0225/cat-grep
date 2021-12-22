#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  // printf("%d", argc);
  for(int i = 1; i < argc; i++) {
    FILE *fp = fopen(argv[i], "r");
    if (fp == NULL) {
      printf("Invalid file.\n");
      exit(1);
    }
    int bufferLen = 255;
    char buffer[bufferLen];
    while (fgets(buffer, bufferLen, fp)) {
      printf("%s", buffer);
    }

    fclose(fp);
  }
  exit(0);
}
