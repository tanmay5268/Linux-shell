#include <stdio.h>
#include <unistd.h>
int main(void){
       char *file_path="test.txt";
       int permissions = R_OK; // read permissions
if (access(file_path, permissions) == 0){
    printf("The file %s can be read.\n", file_path);
    }
  r else{
        printf("The file %s cannot be read.\n", file_path);
}}   