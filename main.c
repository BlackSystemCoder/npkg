#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include.h"
int main(int argc, char *argv[]) {
if (argc < 3) {
  printf("npkg - not a package \n simple source-based package management system \n");
  return 1; 
}
else if (argc == 3 && strcmp(argv[1], "install") == 0) {
    char idirpath[256];
    char ipath[256];
    char icommand[256] = "wget ";
    strcpy(idirpath, repo);
    strcat(idirpath, argv[2]);
    strcpy(ipath, idirpath);
    strcat(ipath, "/install.sh");
    strcat(icommand,ipath);
    system(icommand);
}
else {
  printf("unknown command: %s \n", argv[1]);
  return 1;
}}
